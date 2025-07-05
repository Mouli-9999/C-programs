#include<stdio.h>
int main()
{
int a=128,arr[40]={0},i=0,temp;
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
a=a>>3;
printf("%d\n",a);
i=0;
while(a>0)
{
arr[i]=a%2;
a/=2;
i++;
}
for(i=31;i>=0;i--)
printf("%d",arr[i]);

}
