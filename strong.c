#include<stdio.h>
void main()
{
    int i,n,r,fact,sum=0,temp;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
   i=1;
   fact=1;
   r=n%10;
   while(i<=r)
   {
      fact=fact*i;
      i++;
   }
   sum=sum+fact;
   n=n/10;
}
if(sum==temp)
   printf("%d is a strong number",temp);
else
   printf("%d is not a strong number",temp);
}