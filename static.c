#include<stdio.h>
void display();
void main()
{
    display();
    display();
    display();
}
void display()
{
    static int x=10;
    printf("%d \n",x);
    x++;
    printf("%d \n",x);
}