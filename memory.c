#include <stdio.h>

int main () {
    int age = 22;
    int * PAge = &age; // pointer variable which is storing the memory address of the integer age variable

    double gpa = 3.2;
    double * pGpa = &gpa; //pointer variable storing memory address of the double gpa variable 

    char grade = 'A';
    char * pGrade = &grade; //pointer variable storing the memory address of grade characters

    printf("Age: %p\n gpa: %p\n grade: %p\n", &age, &gpa, &grade);
}

//A pointer is a 'data type' that points to the memory address