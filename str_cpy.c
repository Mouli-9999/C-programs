#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30],str2[20];

    puts("Enter string 1:");
    gets(str1);

    puts("Enter string 2:");
    gets(str2);

    strcpy(str2,str1);

    puts("String is:");
    puts(str2);
}