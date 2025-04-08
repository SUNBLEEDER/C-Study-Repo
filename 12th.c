#include <stdio.h>
int main()
{
   int a,b,c;
    printf("Enter the value of a of which you want to find the modulus:");
    scanf("%d",&a);

    printf("Enter the value of b of which you want to find the modulus:");
    scanf("%d",&b);

    c=a%b; // here the int main is used because standard, portable, and allows the program to return an exit status to the operating system. Avoid using void main() in modern C programming.
    printf("The modulus of a and b is:%d\n",c);

    return 0;
}