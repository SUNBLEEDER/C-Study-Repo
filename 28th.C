#include <stdio.h>
int main()
{
    int i,n;
    int x[5]={10,20,30,40,50};
     for(i=0;i<=4;i++) //here semicolon should be placed not ,
     {
        printf("%d\n",x[i]*x[i]); //here the thing which i did wrong was that i did n[i]*[i] but no is specified 
     }
     return 0;
}