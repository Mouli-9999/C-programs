#include<stdio.h>
void main()
{
    int nu1,de1,nu2,de2,r1,r2,i,gcd;
    printf("Enter first numerator:");
    scanf("%d",&nu1);
    printf("Enter first denominator:");
    scanf("%d",&de1);

    printf("Enter second numerator:");
    scanf("%d",&nu2);
    printf("Enter second denominator:");
    scanf("%d",&de2);

    r1=(nu1*de2)+(de1*nu2);

    r2=de1*de2;

    for(i=1; i<=r1 && i<=r2; i++)
    {
       if(r1%i==0 && r2%i==0)
          gcd=i;
    }

    printf("(%d / %d) + (%d / %d) = (%d / %d)", nu1, de1, nu2, de2, r1/gcd, r2/gcd);


}