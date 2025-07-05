#include <stdio.h>

int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 1, 5};
    int size1,size2,subset=1,i,j;

    size1 = sizeof(arr1) / sizeof(arr1[0]);   //20/4
    size2 = sizeof(arr2) / sizeof(arr2[0]);   //15/4


    for(i=0;i<size2;i++)
    {
        int found=0;
        
        for(j=0;j<size1;j++)
        {
            if(arr2[i]==arr1[j]) 
            {
                found=1;
                break;
            }
        }
       
       
        if (!found) 
        {
            subset=0;
            break;
        }
    }

    if (subset)
        printf("arr2[] is a subset of arr1[]\n");
    else
        printf("arr2[] is not a subset of arr1[]\n");
}
