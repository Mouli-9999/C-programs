#include<stdio.h>
void add(int a,int b);
int main()
{
    int a,b,sum;
    printf("Enter a and b values:");
    scanf("%d%d",&a,&b);
    add(a,b);
}
void add(int a,int b)
{
    int sum=a+b;
    printf("Sum of %d and %d is %d",a,b,sum);
}