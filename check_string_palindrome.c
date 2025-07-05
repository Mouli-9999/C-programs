#include <stdio.h>
#include <string.h>


int main() 
{
    char str[30];
    int i,length,flag=0;

    puts("Enter the string:");
    gets(str);

    length=strlen(str);

    for(i=0;i<length;i++) 
    {
        if (str[i]!=str[length-i-1]) 
        {
            flag=1;
            break;
        }
    }

    if (flag)
        printf("It is NOT palindrome");
    else
        printf("It is palindrome");
}