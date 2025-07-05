#include <stdio.h>
int main() 
{
    int arr[] = {1,5,7,-1,5},n,sum=6,count=0,i,j;
    
    n=sizeof(arr) / sizeof(arr[0]);     //  20/4

    for(i=0;i<n;i++) 
    {
        for(j=i;j<n;j++) 
        {
            if(arr[i]+arr[j]==sum) 
            {
                count++;
            }
        }
    }

    printf("Number of pairs with sum %d is %d\n", sum, count);
}