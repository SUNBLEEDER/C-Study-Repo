#include<stdio.h>
void main()
{
    int age;
    printf("enter the age of the person:");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("The person is eligible to vote\n");
    }
    if(age<18)
    {
        printf("The person is not eligible to vote\n");
    }
  
}