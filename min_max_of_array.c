#include<stdio.h>
void main()
{
    int a[20],i,size,min,max;

    printf("Enter size of the array:");
    scanf("%d",&size);

    printf("Enter elements in the array:");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    min=max=a[0];

    for(i=0;i<size;i++)
    {
        if(min>a[i])
        min=a[i];

        if(max<a[i])
        max=a[i];
    }

    printf("smallest element is: %d \nbiggest element is: %d",min,max);
    
}