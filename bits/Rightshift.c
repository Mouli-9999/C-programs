#include<stdio.h>
int main()
{
int a=32,arr[40]={0},i=0,temp,bit;
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
a=a>>5;
printf("%d\n",a);
for(i=31;i>=0;i--)
{
    if((a&(1<<i))==0)
    {
        bit=0;
        printf("%d",bit);

    }
    else
    {
          bit=1;
        printf("%d",bit);

    }

}

}
