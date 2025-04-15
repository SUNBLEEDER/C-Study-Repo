#include <stdio.h>
void main()
{
    int days;
    printf("Enter a numbr between 1 to 3:");
    scanf("%d",&days);
    switch(days) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednessday");
        break;
    default:
        printf("You have enterd the wrong input");
    }
    
}