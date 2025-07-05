#include<stdio.h>
int palindrome(int n);
void main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    palindrome(n);

}
int palindrome(int n)
{
    int r,rev=0,temp;
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        temp=temp/10;
        rev=rev*10+r;
    }
    if(rev==n)
    printf("Palindrome number");
    else
    printf("NOT Palindrome");
}
