#ifndef STUDENT_EXAMTICKET_H
#define STUDENT_EXAMTICKET_H

#include "task.h"

typedef struct ExaminationTicket {
    int number;
    task* Task[20];
};

#endif 