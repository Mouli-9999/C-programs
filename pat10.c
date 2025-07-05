#include<stdio.h>
void main()
{
    int i,j,k;
    char ch='A';
    for(i=0;i<5;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<5;j++)
        {
             printf("%c ",ch++);
        }
        printf("\n");
    }
}