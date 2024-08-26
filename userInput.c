#include <stdio.h>

int main (void) {
    char name[20];
    printf("What is your name: ");
    fgets(name,20,stdin);
    printf("My name is %s", name);
    int age;
    printf("What is your age: \n");
    scanf("%d", &age);
    printf ("I am %d years old \n", age);
    return 0;
}