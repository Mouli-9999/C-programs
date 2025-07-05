#include<stdio.h>
void main()
{
    int array[10]={10,20,30,40,50,60,70,80,90,100};
    
    int add=array[9]+array[1];
    printf("Addition of array is %d \n",add);

    int sub=array[9]-array[1];
    printf("Substarction of array is %d \n",sub);

    int mul=array[9]*array[1];
    printf("Multiplication of array is %d \n",mul);

    int div=array[9]/array[1];
    printf("Division of array is %d \n",div);

    int mod=array[9]%array[1];
    printf("Modulus of array is %d \n",mod);
}