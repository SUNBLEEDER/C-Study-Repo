#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year you want to check if it is leap year or not:");
    scanf("%d",&year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year you have entered is a leap year");
    }
    else
    {
        printf("The year you have entered is not a leap year");
    }
}