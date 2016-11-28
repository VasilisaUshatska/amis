#ifndef STUDENT_TASK_H
#define STUDENT_TASK_H

#include "task.h"

typedef struct ChoosedAnswer {
    Task* task;
    char choosedVariant[256];
};

#endif