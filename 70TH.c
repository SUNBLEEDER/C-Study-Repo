#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate and print 10 random numbers
    for (int i = 0; i < 10; i++) {
        int randomNum = rand() % 100; // Random number between 0 and 99
        printf("%d\n", randomNum);
    }

    return 0;
}
