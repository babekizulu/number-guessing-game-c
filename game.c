#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int secret = 5;
    int guess;
    int count = 0;
    int attempts = 2;

    while (guess != secret && count < 3)
    {
        printf("Guess the secret number: ");
        scanf("%i", &guess);
        if (guess != secret)
        {
            attempts--;
            count++;
            printf("Incorrect, go fish!\n");
            printf("You have %i attempts left\n", attempts + 1);
        }
    }
    if (attempts + 1 == 0)
    {
        printf("You lose, better luck next time...");
    }
    else
    {
        printf("You Win!! Great guessing skills fam!");
    }
}