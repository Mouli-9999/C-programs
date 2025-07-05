#include<stdio.h>
void main()
{
    int a[5][5],i,j,r,c,sum=0;

    printf("Enter size of rows and cols:");
    scanf("%d%d",&r,&c);

    if(r==c)
    {
        printf("Enter matrix elements:");

        for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                sum+=a[i][j];
            }
        }
        printf("Trace of matrix is %d",sum);
    }
    else
    {
        printf("Trace is not possible");
    }

}