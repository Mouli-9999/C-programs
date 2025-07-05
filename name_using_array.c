#include<stdio.h>
void main()
{
    char name[30];
    int size,i;

    printf("Enter size:");
    scanf("%d",&size);

    printf("enter your name:");

    for(i=0;i<size;i++)
    scanf("%c",&name[i]);

    printf("Name is:");

    for(i=0;i<size;i++)
    printf("%c",name[i]);
}