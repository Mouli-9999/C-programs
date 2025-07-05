#include <stdio.h>

int main()
{
    int n,i,num,max;


    printf("Enter the number of elements: ");
    scanf("%d",&n);


    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++) 
    {
        scanf("%d", &num);
        if(num>max)
        {
            max=num;
        }
    }

    printf("The biggest number is: %d\n", max);

}
