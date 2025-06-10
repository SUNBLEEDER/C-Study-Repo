#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
  srand(time(NULL)); // Seed the random number generator with current time

  printf("10 Random Numbers between 1 and 100:\n");
  for (i = 0; i < 10; i++) {
    int random_number = (rand() % 100) + 1; // Generates numbers between 1 and 100
    printf("%d\n", random_number);
  }
  return 0;
}