#include <stdio.h>
void main()
{
    int r,h,pie,volume;

    pie=3.14;

    printf("enter the value of r:");
    scanf("%d",&r);

    printf("Enter the value of h:");
    scanf("%d",&h);

   volume=pie*r*r*h;

    printf("The volume of the circle is:%d",volume);
}