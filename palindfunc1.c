//palindrome program without arguments and with return type
#include <stdio.h>
int palindrome ();
int n2;
int main()
{
   int rev;
    rev=palindrome();
    if(rev==n2)
    printf("palindrome");
    else
    printf("Not palindrome ");
}
int palindrome()
{
    int r,n,rev=0;
    printf("Enter n value:");
    scanf("%d",&n);
    n2=n;
    while(n!=0)
    {
    r=n%10;
    n=n/10;
    rev=rev*10+r;
    }
    return rev;
}