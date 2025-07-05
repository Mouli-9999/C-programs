#include<stdio.h>
void main()
{
    int x=10;
    int *p;
    p=&x;

    printf("Address of x and p is %u %u \n",&x,p);
    printf("Value of x and p is %d %d",x,*p);
}