#include<stdio.h>
void main()
{
    int i,j,a[2][3]={11,22,33,44,55,66};

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}