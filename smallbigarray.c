#include<stdio.h>
void main()
{
    int a[20],i,size,large,small;

    printf("Enter the size of array:");
    scanf("%d",&size);

    printf("Enter the elements in the array:");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    large=small=a[0];

    for(i=1;i<size;i++)
    {
        if(large<a[i])
        large=a[i];

        if(small>a[i])
        small=a[i];
    }

    printf("smallest is %d \n largest is %d",small,large);
}