#include<stdio.h>
void display(struct book b);
struct book
{
    int id;
    char name[20];
    float price;
};
void main()
{//struct using fucntion runs only in turbo c or online c compiler with turbo c
    struct book b;
    display(b);
}
void display(struct book b)
{
    printf("Enter book id, name, price:\n");
    scanf("%d%s%f",&b.id,&b.name,&b.price);

    printf("Book Information\n");

    printf("Id : %d\n",b.id);
    printf("Name : %s\n",b.name);
    printf("price : %.2f\n",b.price);
}