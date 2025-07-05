#include<stdio.h>
void main()
{
    int n,r,rev=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(temp==rev)
    {
        printf("%d is Palindrome number",temp);
    }
    else{
        printf("%d is not Palindrome number",temp);
    }
        
}