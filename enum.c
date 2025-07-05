#include<stdio.h>
enum code{miyapur=1,kphb=2,ameerpet=3,lakdikapul=4,lbnagar=5,Hayathnagar=6};
enum code c;
int main()
{
    printf("Enter code to know area:");
    scanf("%d",&c);
    
    if(c==ameerpet)
    printf("ameerpet");
    
    if(c==kphb)
    printf("kphb");
    
    if(c==lbnagar)
    printf("LB Nagar");

    if(c==lakdikapul)
    printf("Lakdikapul");

    if(c==Hayathnagar)
    printf("Hayathnagar");

    if(c==miyapur)
    printf("Miyapur");
    
    if(c>6)
    printf("Invalid Code");
}