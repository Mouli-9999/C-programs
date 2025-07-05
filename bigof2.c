//Biggest of 2 numbers
#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter m and n values:");
    scanf("%d%d",&m,&n);

    if(m>n)
    {
        printf("%d is greater than %d",m,n);
    }
    else if(m<n)
    {
       printf("%d is greater than %d",n,m); 
    }
    else if(m==n)
    {
        printf("%d is equal to %d",m,n);
    }
    

}