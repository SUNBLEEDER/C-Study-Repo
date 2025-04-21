#include <stdio.h>
int main()
{
    int income,tax=0;
    printf("Enter the annual income of the person:");
    scanf("%d",&income);

    if(income<250000){
        tax=0;
    }
    else if(tax>250000 && tax<500000){
    tax = 0.05 * (income-250000);
    }
    else if(income>500000 && income<=1000000){
        tax=0.05 * (500000-250000) + 0.2*(income-500000);
    }
    else if (income>1000000){
        tax= 0.05 * (500000-250000)+ 0.2*(1000000-500000)+0.3*(income-1000000);
    }
    printf("The tax imposed on the annual salary is:%d\n",tax);

    return 0;

}