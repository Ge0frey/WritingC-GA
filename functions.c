#include <stdio.h>

void sayHi ();

int main () {
    sayHi("Mike");
    return 0;
}

void sayHi (char name[])
{
    printf("Hello %s \n", name);
}