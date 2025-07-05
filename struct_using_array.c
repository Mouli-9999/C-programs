#include<stdio.h>
void main()
{
    struct books
    {
        int id;
        char name[20];
        float price;
    }book[3];
    for(int i=0;i<3;i++)
    {
    printf("Enter book %d id,name,price:",i+1);
    scanf("%d%s%f",&book[i].id,&book[i].name,&book[i].price);
    }
    for(int i=0;i<3;i++)
    {
    printf("Book %d details \n",i+1);
    printf("Id is: %d \n",book[i].id);
    printf("Name is: %s \n",book[i].name);
    printf("Price is: %.2f \n",book[i].price);
    }
    
}