#include <stdio.h>
int main() 
{
    int i,n,count=0;
    printf("Enter n value: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
     {
        if (n%i == 0)
         {
            count++;
        }
    }
    if(count>2)
    printf("%d is not prime number",n);
    else
    printf("%d is prime number",n);
}