#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
    }
    if(temp%sum==0)
    printf("%d is Harshad number",temp);
    else
    printf("%d is not Harshad number",temp);
}