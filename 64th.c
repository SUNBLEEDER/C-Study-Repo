#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, user_guess, attempts = 0;
    srand(time(0)); // Seed the random number generator
    number_to_guess = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to Guess the Number!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);
        attempts++;

        if (user_guess < number_to_guess) {
            printf("Too low! Try again.\n");
        } else if (user_guess > number_to_guess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number_to_guess, attempts);
        }
    } while (user_guess != number_to_guess);

    return 0;
}
