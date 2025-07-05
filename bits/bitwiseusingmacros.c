#include<stdio.h>
#define bitset(a,bit)  a|(1<<bit)
#define bitclear(a,bit)  a&~(1<<bit)
#define bittoggle(a,bit)  a^(1<<bit)
#define bitstatus(a,bit)  a&(1<<bit)
int main()
{
int c=bitset(9,2);
printf("%d\n",c);
 c=bitclear(9,3);
printf("%d\n",c);
 c=bittoggle(9,3);
printf("%d",c);
}
