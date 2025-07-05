#include <stdio.h>

int main() 
{
    int arr[50],size,i,fir_small,sec_small;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i=0;i<size;i++) 
    {
        scanf("%d", &arr[i]);
    }

    if (arr[0]<arr[1]) 
    {
        fir_small=arr[0];
        sec_small=arr[1];
    }
    else 
    {
        fir_small=arr[1];
        sec_small=arr[0];
    }


    for (i=2;i<size;i++) 
    {
        if (arr[i]<fir_small) 
        {
            sec_small=fir_small;
            fir_small=arr[i];
        }
        else if(arr[i]<sec_small&&arr[i]!=fir_small) 
        {
            sec_small=arr[i];
        }
    }

    printf("The second smallest element in the array is: %d\n", sec_small);
}
