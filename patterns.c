#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k=1,l;
    for(i=1;i<=10;i++)
    {
        for(l=10;l>=i;l--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
            if(k>10)
            exit(0); 
        }
        
        printf("\n");
    }

}