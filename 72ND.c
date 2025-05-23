#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i;

    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string if present
    str[strcspn(str, "\n")] = 0;

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Print the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}
