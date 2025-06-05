#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min, max, count, i;

    printf("Enter the minimum value for the range: ");
    scanf("%d", &min);

    printf("Enter the maximum value for the range: ");
    scanf("%d", &max);

    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &count);

    srand(time(NULL));

    printf("Random numbers between %d and %d:\n", min, max);
    for (i = 0; i < count; i++) {
        int random_number = (rand() % (max - min + 1)) + min;
        printf("%d ", random_number);
    }
    printf("\n");

    return 0;
}