#include<stdio.h>
void main()
{
    int i,j,a[3][3];

    printf("Enter matrix elements:");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}