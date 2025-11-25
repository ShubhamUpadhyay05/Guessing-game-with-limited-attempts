#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 5;

    // Generate random number
    srand(time(0));
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("You have %d attempts to guess the number between 1 and 100.\n\n", attempts);

    while (attempts > 0) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("🎉 Correct! You guessed the number!\n");
            return 0;
        } 
        else if (guess > secretNumber) {
            printf("Too high!\n");
        } 
        else {
            printf("Too low!\n");
        }

        attempts--;
        printf("Attempts left: %d\n\n", attempts);
    }

    printf("❌ Out of attempts! The correct number was %d.\n", secretNumber);

    return 0;
}
