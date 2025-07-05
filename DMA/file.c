#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fptr;
    char str[100];
    fptr=fopen("myfile.txt","r");

    if(fptr==NULL)
    {
        printf("File not Found");
        exit(0);
    }

    printf("Data is:");

    // while(strlen(gets(str)>0))
    // {
    //     fputs(str,fptr);
    // }

    while(fgets(str,100,fptr)!=NULL)
    puts(str);

    fclose(fptr);
}