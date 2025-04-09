#include <stdio.h> 
void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number%97==0)
    {
        printf("%d is divisible  by 97\n",number);
    }
    else
    {
        printf("%d is not divisible by 97\n",number);
    }
        
    

}