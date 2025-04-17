#include <stdio.h>
void main()
{
    int a,b,c;
    int average;

    printf("Enter the mark of the first subject:");
    scanf("%d",&a);

    printf("Enter the marks of the second subject:");
    scanf("%d",&b);

    printf("Enter the marks of the third subject:");
    scanf("%d",&c);

    printf("The marks of the three subjects are %d %d and %d",a,b,c);

    if(a<=33||b<=33||c<=33);
    {
    printf("You are failed because you have scored less than 33 in individual subjects");
    }
    else if (average=a+b+c/3<40)
    {
        printf("You are failed because you have scored less than 40 percent overally ");
    }
    else 
    {
        printf("You have passed the examination");
    }



}