#include<stdio.h>
void main()
{
    int i,j,n,range,temp,sum=0,fact;
    

    printf("Enter the range:");
    scanf("%d",&range);
    
    for(n=1;n<=range;n++)
    {
        temp=n;
        sum=0;
        for(j=n;j>0;j=j/10) 
        {
            fact=1;

        for(i=1;i<=j%10;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        }
    if(sum==temp)
    printf("%d  ",temp);
    }
}