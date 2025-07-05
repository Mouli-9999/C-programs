//biggest of 3 numbers
#include<stdio.h>
void main()
{
    int i,j,k;
    printf("Enter i,j,k values:");
    scanf("%d%d%d",&i,&j,&k);

    if(i>j&&i>k)
    {
        printf("%d is greater",i);
    }
    else if(j>i&&j>k)
    {
        printf("%d is greater",j);
    }
    else if(k>i&&k>j)
    {
        printf("%d is greater",k);
    }

}