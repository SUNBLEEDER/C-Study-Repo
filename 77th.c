#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed the random number generator

    int randomNumber = rand() % 100; // Generates a random number between 0 and 99

    printf("Random number: %d\n", randomNumber);

    return 0;
}