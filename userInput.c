#include <stdio.h>

int main(void)
{
    double num1;
    double num2;
    int age;
    char name[20];
    printf("What is your name: ");
    fgets(name, 20, stdin);
    printf("My name is %s", name);
    printf("What is your age: \n");
    scanf("%d", &age);
    printf("I am %d years old \n", age);
    printf("Enter the first number: \n");
    scanf("%lf", &num1);
    printf("Enter the second number: \n");
    scanf("%lf", &num2);
    printf("Answer: %f \n", num1 + num2);
    return 0;
}