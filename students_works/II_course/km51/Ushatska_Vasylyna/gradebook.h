#ifndef STUDENT_GRADEBOOK_H
#define STUDENT_GRADEBOOK_H

#include "student.h"

typedef struct GradeBook {
    char first_name[30];
    char last_name[30];
    char university_name[100];
    int course;
    char faculty_name[30];
    char grade_book_code[10];
};

#endif 