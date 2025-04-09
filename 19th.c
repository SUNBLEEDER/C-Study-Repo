#include <stdio.h> // this is th same code as the 18th one but in 18th only if is used but in this both if and else is used 
void main()
{
    int age;
    printf("Enter the age of the human whom you want to check if he/she is eligible to vote:");
    scanf("%d",age);

    if(age>=18)
    {
        printf("The person is eligible to vote");
    }
    else
    {
        printf("The person is not eligible to vote");
    }

}