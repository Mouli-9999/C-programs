#include<stdio.h>
void addition(int a,int b,int add);
void main()
{
    int a=5,b=8,add;
    addition(a,b,add);
    printf("From main function:Addition is %d \n",add);
}

void addition(int a,int b,int add)
{
    add=a+b;
    printf("From sub function:Addition is %d \n",add);
}
