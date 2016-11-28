#ifndef STUDENT_STUDENT_H
#define STUDENT_STUDENT_H

#include "gradebook.h"

typedef struct Student{
    GradeBook* grade_book;
};

Student* create_student();

#endif