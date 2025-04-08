#include <stdio.h>
void main()
{
    int principle,timeperiod, rate,simpleintrest ;

    printf("Enter the principle amount:");
    scanf("%d",&principle);

    printf("Enter the timeperiod:");
    scanf("%d",&timeperiod);

    printf("Enter the rate of intrest");
    scanf("%d",&rate);

    simpleintrest=principle*timeperiod*rate/100;

    printf("The simple intrest is:%d");

}