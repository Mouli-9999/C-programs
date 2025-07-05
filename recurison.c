#include<stdio.h>
int sumofn(int n);
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("Sum is %d",sumofn(n));
}
int sumofn(int n)
{
    if(n!=0)
    return n+sumofn(n-1);
    else
    return n;

}