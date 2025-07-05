#include<stdio.h>
void main()
{
    int i,n,r,sum=0;

    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        r=n%i;
        if(r==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    printf("%d is a perfect number",n);
    else
    printf("%d is not a perfect number",n);
}