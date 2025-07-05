#include<stdio.h>
void main()
{
    int i,j,a[2][2],sum=0;

    printf("Enter matrix elements:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=sum+a[i][j];
        }
    }

    printf("The sum of matrix is %d ",sum);
   
}


 