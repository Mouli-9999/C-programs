#include<stdio.h>

int main()
{
    int n1,n2,gcd=1,i;
    printf("Enter n1 and n2 values:");
    scanf("%d%d",&n1,&n2);
    
    for(i=1;i<=n1||i<=n2;i++)
     {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    printf("The GCD of %d and %d is: %d",n1,n2,gcd);
}