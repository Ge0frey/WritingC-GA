#include <stdio.h>

int main()
{
    int secretNumber = 4;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outofGuesses = 0;

    while (guess != secretNumber && outofGuesses == 0)
    {
        if (guessCount < guessLimit)
        {
            printf("Enter number: ");
            scanf("%d", &guess);
            guessCount++;
        }
        else
        {
            outofGuesses = 1;
        }
    }
    if (outofGuesses == 1)
    {
        printf("Out of guesses\n");
    }
    else
    {
        printf("You win\n");
    }
}
