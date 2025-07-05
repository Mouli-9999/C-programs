#include <stdio.h>

int main()
{
    int arr[5],i,search,found=0;

    printf("Enter elements in array: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &search);

    found=0; 
    
    for(i=0;i<5;i++)
    {
        if(arr[i]==search)
        {
            found=1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\n%d is found at index %d", search, i);
    }
    else
    {
        printf("\n%d is not found in the array", search);
    }
}