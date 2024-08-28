#include <stdio.h>

int main()
{
    char color[20];
    char pluralNouns[20];
    char celebrity[20];

    printf("Enter color: ");
    scanf("%s", color);
    printf("Enter Plural noun: ");
    scanf("%s", pluralNouns);

    // Clear the newline character left by scanf
    while (getchar() != '\n')
        ;

    printf("Enter celebrity: ");
    fgets(celebrity, 20, stdin);

    printf("Roses are %s \n", color);
    printf("%s are blue \n", pluralNouns);
    printf("I love %s", celebrity);
}