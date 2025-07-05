#include<stdio.h>
#include<string.h>

void main()
{
    char str1[30],str2[20];

    puts("Enter string 1:");
    gets(str1);

    puts("Enter string 2:");
    gets(str2);

    printf("strcmp is :%d \n",strcmp(str1,str2));

    printf("strstr is :%d",strstr(str1,str2));
}