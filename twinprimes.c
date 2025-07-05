#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n1,n2,count1=0,count2=0,i;
    printf("Enter n1 and n2 values:");
    scanf("%d%d",&n1,&n2);

    for(i=2;i<n1;i++)
    {
        count1++;
    }
    for(i=2;i<n2;i++)
    {
        count2++;
    }

    if(count1==0&&count2==0)                              
    {
        if(abs(n1-n2==2))
        printf("%d and %d are twin primes",n1,n2);
        else
        printf("%d and %d are not twin primes",n1,n2);        
    }

    // else
    // printf("may not prime numbers");

}