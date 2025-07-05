#include <stdio.h>
int main()
 {
    int n=1, i,k,range, fact;
    printf("Enter the Range: ");
    scanf("%d", &range);
    for (i = n; i <= range; i++) 
    {
        fact = 1;
        for (k = 1; k <= i; k++) 
        {
            fact = fact * k;
        }
        printf("%d ",fact);
    }
}