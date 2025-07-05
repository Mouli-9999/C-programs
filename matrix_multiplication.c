#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,r1,c1,r2,c2;

    printf("Enter r1 and c1 value:");
    scanf("%d%d",&r1,&c1);

    printf("Enter r2 and c2 value:");
    scanf("%d%d",&r2,&c2);

    if(c1==r2)
    {
        printf("Enter elements of first matrix:");
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        scanf("%d",&a[i][j]);

        printf("Enter elements of second matrix:");
        for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        scanf("%d",&b[i][j]);

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]=c[i][j]+a[i][j]*b[k][j];
                }
            }
        }

        printf("Multiplication is :\n");

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }

    }

    else
    {
        printf("Multiplication is NOT possible");
    }
}