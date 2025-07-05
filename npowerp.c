#include<stdio.h>
int main()
{
    int i,base,exponent,power=1;
    printf("Enter base and exponent values:");
    scanf("%d %d",&base,&exponent);
    for(i=1;i<=exponent;i++)
    {
        power=power*base;
    }
    printf("%d ^ %d is %d",base,exponent,power);
}