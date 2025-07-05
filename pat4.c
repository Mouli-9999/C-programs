#include<stdio.h>
void main()
{
    int i,j,k=20;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",k-=2);
            // k=k-2;
        }
        printf("\n");
    }
}