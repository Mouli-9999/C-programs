#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter number:");
    scanf("%d",&n);

    while(n!=0)//or n>0
    {
        n=n/10;
        count++;
    }
    printf("no. of the digits is %d",count);
}