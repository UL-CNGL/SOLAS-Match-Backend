#include "UserTaskDeadlineEmailGenerator.h"
using namespace  SolasMatch::Common::Protobufs::Emails;

UserTaskDeadlineEmailGenerator::UserTaskDeadlineEmailGenerator()
{
    //Default Constructor
}

void UserTaskDeadlineEmailGenerator::run()
{
    qDebug() << "EmailGenerator: Generating UserClaimedTaskDeadlinePassed email";

    UserClaimedTaskDeadlinePassed email_message;
    email_message.ParseFromString(this->protoBody.toStdString());

    ConfigParser settings;
    QString error = "";
    QSharedPointer<Email> email = QSharedPointer<Email>(new Email);
    QSharedPointer<User> user = QSharedPointer<User>();
    QSharedPointer<Task> task = QSharedPointer<Task>();
    QSharedPointer<MySQLHandler> db = MySQLHandler::getInstance();


    user = UserDao::getUser(db, email_message.translator_id());
    task = TaskDao::getTask(db, email_message.task_id());

    if(!user || !task) {
        error = "Failed to generate UserClaimedTaskDeadlinePassed email: Unable to find relevant ";
        error += "data in the Database. Searched for User ID ";
        error += QString::number(email_message.translator_id()) + " and Task ID ";
        error += QString::number(email_message.task_id()) + ".";
    }

    if(error.compare("") == 0) {
        ctemplate::TemplateDictionary dict("user_claimed_task_deadline_exceeded");
        if(user->display_name() != "") {
            dict.ShowSection("USER_HAS_NAME");
            dict.SetValue("USERNAME", user->display_name());
        } else {
            dict.ShowSection("NO_USER_NAME");
        }
        dict.SetValue("TASK_TITLE", task->title());
        dict.SetValue("SITE_NAME", settings.get("site.name").toStdString());

        QString task_type = "Translation";
        switch(task->tasktype())
        {
            case 1:
                task_type = "Segmentation";
                break;
            case 2:
                task_type = "Translation";
                break;
            case 3:
                task_type = "Proofreading";
                break;
            case 4:
                task_type = "Desegmentation";
                break;
        }

        dict.SetValue("TASK_TYPE", task_type.toStdString());

        Locale taskSourceLocale =  task->sourcelocale();
        Locale taskTargetLocale = task->targetlocale();
        dict.SetValue("SOURCE_LANGUAGE",taskSourceLocale.languagename());
        dict.SetValue("TARGET_LANGUAGE",taskTargetLocale.languagename());

        bool footer_enabled=(QString::compare("y", settings.get("email-footer.enabled")) == 0);
        if (footer_enabled)
        {
            QString donate_link = settings.get("email-footer.donate_link");
            ctemplate::TemplateDictionary* footer_dict = dict.AddIncludeDictionary("FOOTER");
            QString footer_location = QString(TEMPLATE_DIRECTORY) + "emails/footer.tpl";
            footer_dict -> SetValue("DONATE_LINK",donate_link.toStdString());
            footer_dict -> SetFilename(footer_location.toStdString());
        }

        std::string email_body;
        QString template_location = QString(TEMPLATE_DIRECTORY) + "emails/user-claimed-task-deadline-passed.tpl";
        ctemplate::ExpandTemplate(template_location.toStdString(), ctemplate::DO_NOT_STRIP, &dict, &email_body);

        email->setSender(settings.get("site.system_email_address"));;
        email->addRecipient(QString::fromStdString(user->email()));
        email->setSubject(settings.get("site.name") + ": Task Deadline Passed");
        email->setBody(QString::fromUtf8(email_body.c_str()));
    } else {
        email = this->generateErrorEmail(error);
    }

    this->emailQueue->insert(email, currentMessage);
}
