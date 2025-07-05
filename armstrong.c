#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(temp==sum)
    printf("%d is an armstrong number",temp);
    else
    printf("%d is not an armstrong number",temp);
}