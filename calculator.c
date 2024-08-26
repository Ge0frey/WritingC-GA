#include <stdio.h>

int main()
{
    double num1;
    char op;
    double num2;

    printf("Enter number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf(" Answer: %f \n", num1 + num2);
    }
    else if (op == '-')
    {
        printf(" Answer: %f \n", num1 - num2);
    }
    else if (op == '/')
    {
        printf(" Answer: %f \n", num1 / num2);
    }
    else if (op == '*')
    {
        printf(" Answer: %f \n", num1 * num2);
    }
    else
    {
        printf("Invalid operator");
    }
}