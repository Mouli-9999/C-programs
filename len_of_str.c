//finding length of the string without using strlen() function.
#include<stdio.h>
void main()
{
    char s[30];
    int i,count;

    puts("Enter the string:");
    gets(s);

    for(i=0;i<s[i]!='\0';i++)
    {
        count++;
    }
    printf("Lenght of the string is: %d",count);
}