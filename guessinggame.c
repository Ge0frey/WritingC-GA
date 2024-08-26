#include <stdio.h>

int main () {
    int secretNumber = 4;
    int guess;

    while (guess != secretNumber) {
        printf("Enter number: ");
        scanf("%d", &guess);
    }
    printf("You win\n");
}