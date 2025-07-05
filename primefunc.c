#include<stdio.h>
int primefun(int num);
void main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    primefun(num);

}
int primefun(int num)
{
int i,count=0,temp;
temp=num;
for(i=0;i<=num;i++)
{
    if(num%i==0)
    count ++;
}
if(count>2)
printf("It is not prime number");
else
printf("It is prime number");
}