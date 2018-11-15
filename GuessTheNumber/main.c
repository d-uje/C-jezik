#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;

    srand((unsigned)time(&t));
    int randomNumber = rand() %21;
    int tries = 5;
    int guess = 0;

    printf("This is a guessing game.\nI have chosen a random number between 0 and 20 and you have to guess it in 5 turns.\nGood luck!\n");
    while (tries > 0)
        {
            if (tries == 0)
            {
                printf("Sorry, you have wasted all your guesses.");
                break;
            }
            printf("You have %d tries left.\n", tries);
            printf("Enter your guess: \n");
            scanf("%d", &guess);
            if (guess)
                goto
        }




    return 0;
}
