#include <stdio.h>
int main() 
{
    // int array1[] = {1, 2, 3, 4, 5};  //sorted array
    // int array2[] = {3, 4, 5, 6, 7};
    
    int array1[] = {3, 1, 4, 6, 7};      //unsorted array
    int array2[] = {2, 4, 5, 3, 7};
    
    int size1,size2,i,j;
    
    size1=sizeof(array1) / sizeof(array1[0]);   //20/4
    size2=sizeof(array2) / sizeof(array2[0]);
    
    printf("Intersection of arr1 and arr2 is: ");
    
    for(i=0;i<size1;i++) 
    {
        for(j=0;j<size2;j++) 
        {
            if (array1[i] == array2[j]) 
            {
                printf("%d ",array1[i]);
                break;
            }
        }
    }
}


