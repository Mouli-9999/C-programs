#include <stdio.h>    
     
int main()    
{    
    int arr[30],length,i,j;     
    
    printf("Enter length:");
    scanf("%d",&length);
    
    printf("Enter array elements:");
    
    for(i=0;i<length;i++)
    scanf("%d",&arr[i]);
        
    printf("Repeated elements in given array: \n");    

    for(i=0;i<length;i++)
    {    
        for(j=i+1;j<length;j++)
        {    
            if(arr[i]==arr[j])    
                printf("%d\n",arr[j]);    
        }    
    }    
} 