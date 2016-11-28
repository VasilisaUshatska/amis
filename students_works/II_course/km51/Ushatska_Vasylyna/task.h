#ifndef STUDENT_TASK_H
#define STUDENT_TASK_H

typedef struct Task {
    char question[256];
    char answerVariants[256][4];
    char rightAnswer[256];
};

#endif