#include <stdio.h>

int main()
{
    int n,total,sum=0,missing_no,i;
    int arr[]={1, 2, 3, 4, 6, 7};

    n = sizeof(arr)/sizeof(arr[0]);  //   24/4
    total=(n+1)*(n+2)/2; 
    sum=0;
    
    for(i=0;i<n;i++) 
    {
        sum=sum+arr[i]; 
    }
    
    missing_no=total-sum;
    
    printf("The missing number is: %d\n", missing_no);

}
