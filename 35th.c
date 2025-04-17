#include<stdio.h>
void main()
{
    int a,b,c,d;

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Enter the third number:");
    scanf("%d",&c);

    printf("Enter the fourth number:");
    scanf("%d",&d);

    if (a>b && a>c && a>d)
    {
        printf("a is the largest number between the four numbers");
    }
    else if(b>a && b>c && b>d)
    {
        printf(" b is the largest number among the four numbers");
    }
    else if(c>a && c>b && c>d)
    {
        printf("c is the largset number among the four numbers");
    }
    else //here we dont have to give the condition because we have already given else which justifies that it does not need condition
    {
       printf("d is the largest number among the four numbers");
    }
    
}