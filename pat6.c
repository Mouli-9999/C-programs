#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
             printf("%d ",i);//print i for  55555  and j for different numbers
            //                              4444
            //                              333
            //                               22
            //                               1
        }
        printf("\n");
    }
}