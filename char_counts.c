//counting upper case,lower case,digits,alphabets,spaces,words in a sentence.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,up=0,lw=0,di=0,sp=0,an=0,wo=1;

    puts("Enter sentence:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        up++;

        if(islower(str[i]))
        lw++;

        if(isalnum(str[i]))
        an++;

        if(isdigit(str[i]))
        di++;

        if(isspace(str[i]))
        sp++;

        if(isspace(str[i]))
        wo++;
    }

    printf("Upper case: %d \n",up);
    printf("Lower case: %d \n",lw);
    printf("Alpha numeric: %d \n",an);
    printf("Digits: %d \n",di);
    printf("spaces: %d \n",sp);
    printf("Words: %d \n",wo);
}