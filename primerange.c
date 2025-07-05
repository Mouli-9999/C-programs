#include<stdio.h>
void main()
{
    int n,i,range,count;

    printf("Enter the range:");
    scanf("%d",&range);

    for(n=1;n<=range;n++)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            count++;   
        }

        if(count==2)
        printf("%d  ",n);
    }
}


