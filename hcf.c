#include<stdio.h>

int main()
{
    int num1,num2,hcf=1;
    printf("Enter num1 and num2 values:");
    scanf("%d%d",&num1,&num2);
    
    for(int i = 1; i <= num1 || i <= num2; i++)
     {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    
    printf("The HCF of %d", hcf);
}