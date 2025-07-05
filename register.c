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
    register int i=10;
    printf("%d \n",i);
    i++;
    printf("%d \n",i);

}