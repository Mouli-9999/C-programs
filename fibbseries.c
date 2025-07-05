#include<stdio.h>
void main()
{
    int a,b,c,num;
    printf("Enter the number:");
    scanf("%d",&num);
    if((num==0)||(num==1))
    printf("%d is a fibonacci series");
    else
    {
        a=0;
        b=1;
        c=a+b;
        while(c<num)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if(c==num)
        printf("%d is a fibonacci series term",num);
        else
        printf("%d is not fibonacci series term",num);
    }

}