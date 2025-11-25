#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess, attempts = 5, difference;

    // Initialize random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1;   // Random number between 1 and 100

    printf(" Welcome to the Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it!\n\n", attempts);

    while(attempts > 0)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        difference = abs(secretNumber - guess);

        if(guess == secretNumber)
        {
            printf("\n Congratulations! You guessed the correct number: %d\n", secretNumber);
            return 0;
        }
        else if(guess < secretNumber)
        {
            printf("Too LOW! Try a higher number.\n");
        }
        else
        {
            printf("Too HIGH! Try a lower number.\n");
        }

        // Check closeness
        if(difference <= 10)
        {
            printf("You are almost there!\n");
        }

        attempts--;
        printf("Attempts left: %d\n\n", attempts);
    }

    printf("\n Game Over! You tried all attempts.\n");
    printf("The correct number was: %d\n", secretNumber);

    return 0;
}