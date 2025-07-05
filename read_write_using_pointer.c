#include<stdio.h>
void main()
{
    int a[5],*p,i;
    p=a;
    printf("Enter array elements:");

    for(i=0;i<5;i++)
    scanf("%d",(p+i));

    printf("Array elements are:\n");

    for(i=0;i<5;i++)
    printf("%d \n",*(p+i));
}