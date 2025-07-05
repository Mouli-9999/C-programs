//check a year is leap year or not
#include<stdio.h>
void main()
{
    int year;
    printf("Enter your year:");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("%d is a Leap year",year);
    }
    else if(year%4==0&&year%100!=0)
    {
        printf("%d is a Leap year",year);
    }
    else{
        printf("%d is not a Leap year",year);
    }
}

