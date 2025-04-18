#include <stdio.h>

int main() {
    char op = '+';
    int a = 10, b = 5;
    switch (op) {
        case '+': printf("Sum: %d\n", a + b); break;
        case '-': printf("Diff: %d\n", a - b); break;
        case '*': printf("Prod: %d\n", a * b); break;
        case '/': printf("Quotient: %d\n", a / b); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
