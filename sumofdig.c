#include<stdio.h>
void main()
{
    int n,r,sum=0;
    printf("Enter number:");
    scanf("%d",&n);

    while(n!=0)//or n>0
    {
        r=n%10;
        n=n/10;
        sum+=r;
    }
    printf("Sum of the digits is %d",sum);
}