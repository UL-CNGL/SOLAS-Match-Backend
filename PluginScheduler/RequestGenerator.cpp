#include "RequestGenerator.h"

RequestGenerator::RequestGenerator()
{
}

QSharedPointer<UserTaskScoreRequest> RequestGenerator::GenerateTask(QSharedPointer<UserTaskScoreRequest> task)
{
    task->set_task_id(-1);
    return task;
}