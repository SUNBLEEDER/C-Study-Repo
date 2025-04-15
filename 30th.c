#include <stdio.h>
void main()
{
    int i;
    int x[]={1,2,3,4,5,6,7,8,9,10};
    for(i=9;i>-1;i--)
    {
        printf("%d\n",x[i]*x[i]);
    }

}