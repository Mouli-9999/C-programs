#include<stdio.h>
void main()
{
    int num1, num2, lcm,max,i;
    printf("Enter num1 and num2 values:");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
    max=num1;
    else
    max=num2;

    //max = (num1 > num2)? num1 : num2;

    for(i=max;i<=num1*num2;i++)
        {
            if(i%num1==0 && i%num2==0){
                lcm=i;
                break;
            }
        }
        printf("%d",lcm);

}