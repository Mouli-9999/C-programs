//check even or odd
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("It is an Even number");
    }
    else{
        printf("It is an Odd number");
    }
}