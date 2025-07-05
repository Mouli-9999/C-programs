#include<stdio.h>
int *array();
int main()
{
    int *p,i;
    p=array();
    printf("Array elements are:\n");
    for(i=0;i<5;i++)
    printf("%d \n",*(p+i));
}
int *array()
{
    static int a[]={11,22,33,44,55};
    return a;
}
