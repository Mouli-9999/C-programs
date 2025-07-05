#include<stdio.h>
int main()
{
int a=9,arr[40]={0},i=0,b,temp;
temp=a;
while(a>0)
{
arr[i]=a%2;
a/=2;
i++;
}
for(i=31;i>=0;i--)
printf("%d",arr[i]);
printf("\n");
a=temp;
b=(a<<3)|(a>>29);
printf("%d\n",a);
i=0;
while(b>0)
{
arr[i]=b%2;
b/=2;
i++;
}
for(i=31;i>=0;i--)
printf("%d",arr[i]);

}
