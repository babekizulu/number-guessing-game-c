#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int secret = 5;
    int guess;
    int count = 0;
    int attempts = 3;
    // use the values 1 & 0 to represent true or false, respectively
    int lose = 0;

    while (guess != secret && lose == 0)
    {
        if (count < attempts)
        {
            printf("Guess the secret number: ");
            scanf("%i", &guess);
            count++;
            if (guess != secret)
            {
                printf("Incorrect, try again\n");
            }
        }
        else
        {
            lose = 1;
        }
    }
    if (lose == 1)
    {
        printf("You're out of guesses, better luck next time...");
    }
    else
    {
        printf("You win, great guessing skills!");
    }
}