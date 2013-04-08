#include "TaskClaimedEmailGenerator.h"

TaskClaimedEmailGenerator::TaskClaimedEmailGenerator()
{
    //Default Constructor
}

void TaskClaimedEmailGenerator::run()
{
    qDebug() << "EmailGenerator - Generating TaskClaimed";

    TaskClaimed email_message;
    email_message.ParseFromString(this->protoBody.toStdString());

    ConfigParser settings;
    QString error = "";
    QSharedPointer<Email> email = QSharedPointer<Email>(new Email());
    QSharedPointer<User> user = QSharedPointer<User>();
    QSharedPointer<User> translator = QSharedPointer<User>();
    QSharedPointer<Task> task = QSharedPointer<Task>();
    MySQLHandler *db = new MySQLHandler(QUuid::createUuid().toString());

    if(db->init()) {
        user = UserDao::getUser(db, email_message.user_id());
        translator = UserDao::getUser(db, email_message.translator_id());
        task = TaskDao::getTask(db, email_message.task_id());

        if(user.isNull() || translator.isNull() || task.isNull()) {
            error = "Failed to generate task claimed email: Unable to find relevant ";
            error += "information in the database. Searched for user ID ";
            error += QString::number(email_message.user_id()) + ", translator ID ";
            error += QString::number(email_message.translator_id()) + " and task ID ";
            error += QString::number(email_message.task_id()) + ".";
        }

    } else {
        error = "Failed to generate task claimed email: Unable to Connect to SQL Server. ";
        error += "Check conf.ini for connection settings and make sure mysqld has been started.";
        qDebug() << "Unable to Connect to SQL Server. Check conf.ini and try again.";
    }

    if(error.compare("") == 0) {
        ctemplate::TemplateDictionary dict("task_claimed");
        if(user->display_name() != "") {
            dict.ShowSection("USER_HAS_NAME");
            dict["USERNAME"] = user->display_name();
        } else {
            dict.ShowSection("NO_USER_NAME");
        }
        dict["TASK_TITLE"] = task->title();
        dict["TRANSLATOR_NAME"] = translator->display_name();

        QString user_profile_url = settings.get("site.url");
        user_profile_url += "profile/" + QString::number(translator->user_id());
        dict["USER_PROFILE_URL"] = user_profile_url.toStdString();

        std::string email_body;
        QString template_location = QString(TEMPLATE_DIRECTORY) + "emails/task-claimed.tpl";
        ctemplate::ExpandTemplate(template_location.toStdString(), ctemplate::DO_NOT_STRIP, &dict, &email_body);

        email->setSender(settings.get("site.system_email_address"));;
        email->addRecipient(QString::fromStdString(user->email()));
        email->setSubject("Task Claim Notification");
        email->setBody(QString::fromStdString(email_body));
    } else {
        email = this->generateErrorEmail(error);
    }

    delete db;

    this->emailQueue->insert(email, currentMessage);
    //this->emailQueue->enqueue(email);
}
