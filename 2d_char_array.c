#include<stdio.h>
void main()
{
    char str[5][20];
    int i;
    puts("enter 5 strings:");
    for(i=0;i<5;i++)
    gets(str[i]);
    
    puts("Strings are:");
    for(i=0;i<5;i++)
    puts(str[i]);
}