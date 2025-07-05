#include<stdio.h>
#include<ctype.h>
int main()
{
    char c='A';

    printf("%d \n",isupper(c));
    printf("%d \n",islower(c));
    printf("%d \n",isdigit(c));
    printf("%d \n",isalnum(c));
    printf("%d \n",isalpha(c));
    printf("%d \n",isspace(c));
    printf("%d \n",toupper(c));
    printf("%d \n",tolower(c));

}