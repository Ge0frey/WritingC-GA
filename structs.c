#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    char major[20];
    int age;
    double gpa;
} student2;

int main()
{
    struct Student student1;

    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student2.name, "wangui");

    printf("%s\n", student2.name);
}