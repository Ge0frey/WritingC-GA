#include <stdio.h>

void sayHi(char name[20]); // Prototype

int main()
{
    char name[20];
    sayHi(name);
    return 0;
}

void sayHi(char name[20])
{
    printf("What is your name: \n");
    fgets(name, 20, stdin);
    printf("Hello %s \n", name);
}