#include<stdio.h>
int main(){
   int num, rem, rev, temp, i=1, range;


   printf("Enter the Range: ");
   scanf("%d",&range);

   for(num=i;num<=range;num++)
   {
      temp=num;
      rev=0;
      while(temp)
      {
         rem=temp%10;
         temp=temp/10;
         rev=rev*10+rem;
      }
      if(num==rev)
         printf("%d ",num);
   }
}