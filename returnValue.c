#include <stdio.h>

double cube (double num);

int main () 
{
    printf("%f \n", cube(3));
    return 0;
}

double cube (double num) 
{
    double results = num*num*num;
    return results;
}
