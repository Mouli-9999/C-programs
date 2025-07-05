#include<stdio.h>
void main()
{
    int i,j,k;
    char ch='D';
    for(i=0;i<4;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=4-i;j>=1;j--)
        {
             printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}