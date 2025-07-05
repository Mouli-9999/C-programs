#include<stdio.h>
void printArray(int a[3][3]);
void main()
{
    int a[3][3]={10,20,30,40,50,60,70,80,90};
    printArray(a);

}

void printArray(int a[3][3])
{
    int i,j;
    printf("Array elements are: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}