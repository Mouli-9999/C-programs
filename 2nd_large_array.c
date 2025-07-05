#include <stdio.h>
int main() 
{
    int arr[50], size, i, fir_large, sec_large;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    if (arr[0]>arr[1])
    {
        fir_large=arr[0];
        sec_large=arr[1];
    }
    else 
    {
        fir_large=arr[1];
        sec_large=arr[0];
    }

    for (i=2;i<size;i++) 
    {
        if (arr[i]>fir_large)
        {
            sec_large=fir_large;
            fir_large=arr[i];
        }

        else if(arr[i]>sec_large&&arr[i]!=fir_large) 
        {
            sec_large=arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", sec_large);
}
