//Function with arguments and no return type
#include<stdio.h>
void factorial(int n);
void main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    factorial(n);
}
void factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
}