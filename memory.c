#include <stdio.h>

int main () {
    int age = 30;
    double gpa = 3.2;
    char grade = 'A';

    printf("Age: %p\n gpa: %p\n grade: %p\n", &age, &gpa, &grade);
}