#include<stdio.h>
int main()
{
    int a[5],i,temp;
    
    printf("Enter array elements:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(i=0;i<5/2;i++)
    {
        temp=a[i];
        a[i]=a[5-i-1];
        a[5-i-1]=temp;
    }

    printf("Reverse of the array is:");

    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}