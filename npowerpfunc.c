//Function with arguments and no return type
#include<stdio.h>
void power(int n, int p);
void main()
{
 int n,p;
 printf("Enter n and p values:");
 scanf("%d%d",&n,&p);
 power(n,p);
}
void power(int n, int p)
{
	int i,pwr=1;
		
	for(i=1;i<=p;i++)
	{
	  	pwr=pwr*n;
	}
	printf("%d power %d is %d",n,p,pwr);	
}
