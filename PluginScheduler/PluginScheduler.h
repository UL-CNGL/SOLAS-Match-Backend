#ifndef PLUGINSCHEDULER_H
#define PLUGINSCHEDULER_H

#include <QObject>
#include <AMQPcpp.h>
#include <QtPlugin>
#include <QThreadPool>
#include <QPointer>
#include <QTime>

#include "TimedTask.h"
#include "PluginHandler/WorkerInterface.h"

class PluginScheduler : public WorkerInterface
{
    Q_OBJECT
    Q_INTERFACES(WorkerInterface)

public:
    PluginScheduler();
    void setThreadPool(QThreadPool *);
    bool isEnabled() const;
    const std::string getPluginData() const;

public slots:
    void run();
    void processTask(QPointer<TimedTask> task);

private:
    QThreadPool *mThreadPool;
    QList<QPointer<TimedTask> > taskList;
    bool enabled;

};

#endif // PLUGINSCHEDULER_H
