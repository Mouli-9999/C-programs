#include <stdio.h>
#include <math.h>
int main() {
    int i=1, range, num, count, n, r, result;
    printf("Enter the range: ");
    scanf("%d", &range);
    for (num=i; num <=range; num++) 
    {
        n= num;
        result = 0;
        count = 0;
        while (n!= 0)
         {
            n=n/10;
            count++;
        }
        n=num;
        while (n!=0)
         {
            r=n%10;
            result += pow(r, count);
            n=n/10;
        }
        if (result == num) 
        {
            printf("%d ", num);
        }
    }
}