#include<stdio.h>
#include<string.h>

void main()
{
    char name[30];
    printf("Enter your String:");
    gets(name);

    printf("String is: %s \n",name);
    printf("Length is: %d \n",strlen(name));
    printf("Lower case is: %s \n",strlwr(name));
    printf("Upper case is: %s \n",strupr(name));
    printf("Reverse is: %s",strrev(name));


}