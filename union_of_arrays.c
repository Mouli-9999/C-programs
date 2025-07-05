#include <stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {3, 5, 2, 7, 8};
    
     int unionArr[10],unionSize=0,i,j,found;


    for(i=0;i<5;i++) 
    {
        unionArr[unionSize++] = arr1[i];
    }

    for(i=0;i<5;i++)
    {
        found=0;
        
        for(j=0;j<5;j++) 
        {
            if (arr2[i] == arr1[j]) 
            {
                found=1;
                break;
            }
        }
        
        if(!found) 
        {
            unionArr[unionSize++] = arr2[i];
        }
    }

  
    printf("Union of the two arrays is: ");
    
    for(i=0;i<unionSize;i++) 
    {
        printf("%d ",unionArr[i]);
    }

}
