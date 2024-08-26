#include <stdio.h>

int main () 
{
    char color[20];
    char pluralNouns[20]; 
    char celebrity[20];

    printf("Enter color: ");
    scanf("%s", color);
    printf("Enter Plural noun: ");
    scanf("%s", pluralNouns);
    printf("Enter celebrity: ");
    scanf("%s", celebrity);

    printf("Roses are %s \n", color);
    printf("%s are blue \n", pluralNouns);
    printf("I love %s \n", celebrity);
}