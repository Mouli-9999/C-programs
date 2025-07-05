#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,r,sum=0,temp2,temp3,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp2=n;
    temp3=n;
    while(temp2!=0)
    {
        temp2=temp2/10;
        count++;
    }
    while(temp3!=0)
    {
        r=temp3%10;
        temp3=temp3/10;
        sum=sum+pow(r,count);
    }
    if(n==sum)
    printf("%d is an armstrong number",n);
    else
    printf("%d is not an armstrong number",n);
}