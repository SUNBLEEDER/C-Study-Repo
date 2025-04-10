#include <stdio.h>

int main() {
    float marks[5];
    float total = 0.0; 
    float average;
    int i;


    printf("Enter the marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; 
    }

   
    average = total / 5;

    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}