#include <stdio.h>
int main()
{
    struct book
    {
        char name [25];
        float price;
        int pages;
    } b1;

    struct book P1={"Atomic Habits", 274.0, 199};

    printf("%s\n", P1.name);
    printf("%d\n", P1.pages);
    printf("%.2f\n", P1.price);
    
}