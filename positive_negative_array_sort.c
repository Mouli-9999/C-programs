#include <stdio.h>

int main() 
{
    int arr[]={-4,3,-1,0,2,-5,7,-6},size,i,j;
    
    size=sizeof(arr) / sizeof(arr[0]);   //  32/4=8
    
    printf("Original array is:");
    
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int left=0,right=size-1;
    
    while(left<right)
    {
        while(arr[left]<0 && left<right) 
        {
            left++;
        }
        while(arr[right]>=0 && left<right) 
        {
            right--;
        }
        
        if(left<right) 
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    
    printf("Modified array is:");
    
    for(i=0;i<size;i++) 
    {
        printf("%d ",arr[i]);
    }

}
