#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("Enter three values:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
    printf("%d is bigger than %d and %d",n1,n2,n3);
    else if(n2>n1&&n2>n3)
    printf("%d is bigger than %d and %d",n2,n1,n3);
    else if(n3>n1&&n3>n2)
    printf("%d is bigger than %d and %d",n3,n1,n2);
    else
    printf("Equal values");
}