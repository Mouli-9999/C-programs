#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));

}
int fact(int n)
{
    int f;
    if(n==0)
    return 1;
    else
    f=n*fact(n-1);
    return f;
}
