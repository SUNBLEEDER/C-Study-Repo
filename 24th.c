#include <stdio.h>
void main()
{
    int age;
    printf("Enter the age of the driver to check if he/she is eligible or not:");
    scanf("%d",&age);

    if(age<=55)
    {
        printf("The driver which is he/she is  eligible to ride a vehicle");
    }
    else if(age<18)
    {
        printf("The driver which is he/she is not eligible to ride a vehicle");
    }
    else//(//age>=60)// here it should not be written here as the compiler is getting confused and there should be only two conditions
    {
        printf("You are too old to drive");
        
    }

}