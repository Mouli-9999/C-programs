//print sum of n natural numbers
#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter n value:");
    scanf("%d",&n);

    sum=n*(n+1)/2;
    printf("Sum is %d",sum);
}