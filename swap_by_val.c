#include<stdio.h>
void swap(int a, int b);
void main()
{
    int a=10,b=12;
    printf("swap-call by value\n");
    printf("Before swap a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("After swap a=%d,b=%d\n",a,b);
}
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}