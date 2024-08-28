#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char helloWorld[] = "Hello world"; // do not use string types in C instead use char as an array
    char name[] = "Geofrey";
    int age = 22;
    printf("%s, My name is %s and I am %i years old\n", helloWorld, name, age);
    return 0;
}