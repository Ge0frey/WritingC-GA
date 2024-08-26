#include <stdio.h>

int main()
{
    char grade = 'H';

    switch (grade)
    {
    case 'A':
        printf("You did Great! \n");
        break;
    case 'B':
        printf("You did Alright! \n");
        break;
    case 'C':
        printf("You did poorly! \n");
        break;
    case 'D':
        printf("You did very bad! \n");
        break;
    case 'F':
        printf("You Failed! \n");
        break;
    default:
        printf("Invalid grade!\n");
    }
}