#include<stdio.h>
void main()
{
    int i,j,temp,a[5];
    printf("Enter array elements:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }

        }
    }    
        
        printf("Bubble sort:");
        for(i=0;i<5;i++)
        printf("%d  ",a[i]);
}