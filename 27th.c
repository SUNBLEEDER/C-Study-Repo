#include <stdio.h>
void main()
{
    int days;
    printf("Enter the numbers between 1 to 7 to print which day you want:");
    scanf("%d",&days);

    switch(days)
    {                          // in this case i havent done the curly brackets after the switch

   case 1:
      printf("moday\n");
      break;
   case 2:
      printf("Tuesday\n");
      break;
   case 3:
      printf("Wednesday\n");
      break;
   case 4:
      printf("Thursday\n");
      break;
   case 5:
      printf("Friday\n");
      break;
   case 6:
      printf("Saturday\n");
      break;
   case 7:
      printf("Sunday\n");
      break;
   default:
 printf("You have entered invalid number");

    }


}