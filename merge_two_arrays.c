#include <stdio.h>
int main()
{
    int size1,size2,i=0,j=0,k=0,l;
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    
    size1=sizeof(arr1)/sizeof(arr1[0]);  //  20/4
    size2=sizeof(arr2)/sizeof(arr2[0]);  //  20/4
    
    int merged[size1+size2];    //[5+5]

    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j]) 
        {
            merged[k++]=arr1[i++];
        } 
        else 
        {
            merged[k++]=arr2[j++];
        }
    }
    
    while(i<size1) 
    {
        merged[k++] = arr1[i++];
    }

    while(j<size2) 
    {
        merged[k++]=arr2[j++];
    }

 
    printf("Array after Merging: ");
    
    for (l=0;l<size1+size2;++l)
    {
        printf("%d ", merged[l]);
    }

}
