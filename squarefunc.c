#include<stdio.h>  
int square();  
void main()  
{  
    printf("Going to calculate the area of the square\n");  
    int area = square();  
    printf("The area of the square: %d\n",area);  
}  
int square()  
{  
    int side;  
    printf("Enter side value: ");  
    scanf("%d",&side);  
    return side * side;  
} 