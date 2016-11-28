#include <string.h>

Student* create_student() {
    Student* student = (Student*)malloc(sizeof(Student));
    GradeBook* grade_book = (GradeBook*)malloc(sizeof(GradeBook));
    gradeBook->first_name = get_first_name();
    gradeBook->last_name = get_last_name();
    gradeBook->univercity = get_university_name();
    gradeBook->course = atoi(get_course_name());
    gradeBook->faculty_name = get_faculty_name();
    gradeBook->grade_book_code = get_grade_book_code();
    student->grade_book = grade_book;
}

char* get_first_name() {
    return validate_string("Enter first name: ", 3, 30, LETTERS);
}

char* get_last_name() {
    return validate_string("Enter last name: ", 3, 30, LETTERS);
}

char* get_university_name() {
    return validate_string("Enter university name: ", 3, 100, LETTERS);
}

int get_course_name() { 
    return validate_integer("Enter course: ", 1, 6);
}

char* get_faculty_name() {
    return validate_string("Enter faculty name: ", 2, MAX_FACULTY_NAME_LENGTH, LETTERS);
}

char* get_group_name() {
    return validate_string("Enter group name: ", 2, MAX_GROUP_NAME_LENGTH, strcat(LETTERS, DIGITS);
}

char* get_grade_book_code() {
    return validate_string("Enter grade book code: ", 2, 8, strcat(LETTERS, DIGITS));
}