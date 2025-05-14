#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess;
    int attempts = 0;

    // Seed the random number generator
    srand(time(0));
    randomNumber = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a random number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        attempts++;

        if (userGuess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (userGuess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", randomNumber, attempts);
        }
    } while (userGuess != randomNumber);

    return 0;
}
