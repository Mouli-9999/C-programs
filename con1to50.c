//WAP to display only even numbers using continue within the range 1 to 50.
#include<stdio.h>
void main()
{
    int i;


     for (i=1; i <= 50; i++) { 
        if (i % 2 == 1)
        { 
            continue; 
        } 
        printf("%d ", i); 
    } 
}