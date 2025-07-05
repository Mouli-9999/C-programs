#include<stdio.h>
int main()
{
int a=27,i,temp,bit;
for(i=7;i>=0;i--){
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
a^=(1<<0)|(1<<2)|(1<<4)|(1<<7); // (or) a&=~(0x55);
printf("\n");
for(i=7;i>=0;i--)
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
