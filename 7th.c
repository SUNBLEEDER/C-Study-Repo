#include <stdio.h>
void main()
{
    int length,breadth,c;
    printf("Enter the length of the rectangle:");
    scanf("%d",length);

    printf("Enetr the breadth of the rectangle:");
    scanf("%d", &breadth);

    c=length*breadth;

    printf("The area of the rectangle is:%d",c);
}