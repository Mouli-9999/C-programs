#include<stdio.h>
void main()
{
    int i,j,a[10][10],temp,rows,cols;   //t[3][3];

    printf("Enter no.of rows:");
    scanf("%d",&rows);

    printf("Enter no.of columns:");
    scanf("%d",&cols);

    printf("Enter matrix elements:");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;

            // t[j][i] = a[i][j];
        }
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d",a[j][i]); //printf("%d",t[3][3]);
        }
        printf("\n");
    }
}