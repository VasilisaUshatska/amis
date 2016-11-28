#ifndef VALIDATION_H
#define VALIDATION_H

#define LETTERS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DIGITS "1234567890"

char* validate_string (char* input, int min_length, int max_length, char* valid_symbols) ;
int validate_integer (char* input, int min, int max);

Student* create_student(Student* student);

#endif 
