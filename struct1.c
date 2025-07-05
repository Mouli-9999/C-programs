#include<stdio.h>
void main()
{
    struct books
    {
        int id;
        char name[20];
        float price;
    }bk;
    printf("Enter book id,name,price:");
    scanf("%d%s%f",&bk.id,&bk.name,&bk.price);

    printf("Id is: %d \n",bk.id);
    printf("Name is: %s \n",bk.name);
    printf("Price is: %.2f \n",bk.price);
}