#include<stdio.h>
void main()
{
    int a[5],i,sum=0;

    printf("Enter array elements:");

    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(i=0;i<5;i++)
    sum=sum+a[i];

    printf("The sum of array is %d:",sum);
}