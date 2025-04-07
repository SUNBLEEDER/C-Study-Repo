#include <stdio.h>
void main()
{
    int c,f;

    printf("enter the value of celcius which you want to convert to farenheit:");
    scanf("%d",c);

    f= (c*9/5)+32;

    printf("The value of farenheit later is:%d",f);
}