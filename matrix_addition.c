#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],i,j,r1,c1,r2,c2;

    printf("Enter row 1 and col 1 size:");
    scanf("%d%d",&r1,&c1);

    printf("Enter row 2 and col 2 size:");
    scanf("%d%d",&r2,&c2);

    if(r1==c1&&r2==c2)
    {
    printf("Enter elements for first matrix:");
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        scanf("%d",&a[i][j]);
    printf("Enter elements for second matrix:");
        for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        scanf("%d",&b[i][j]);

        for(i=0;i<r1;i++)
        {
        for(j=0;j<c1;j++)
        {
        c[i][j]=a[i][j]+b[i][j];  //change to - for substaraction 
        }
        }
        printf("addition is : \n");
        for(i=0;i<r1;i++)
        {
        for(j=0;j<c1;j++)
        {
        printf("%d ",c[i][j]);
        }
    
        printf("\n");
        }
    }

    else
    {
        printf("Addition is not possible");
    }


}