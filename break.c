//example on break
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
        printf("%d %d \n", i,j);
        break;
        }
    }
}