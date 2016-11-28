#ifndef TEST_WORK_H
#define TEST_WORK_H

#include "student.h"
#include "examticket.h"

typedef struct Work {
    Student *student;
    ExaminationTicket *examticket;
    ChoosedAnswer choosedAnswers[256]][20];
};

#endif //TEST_WORK_H