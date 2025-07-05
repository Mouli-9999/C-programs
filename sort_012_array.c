#include<stdio.h>
int main()
{

int n=7,i,count=0,count1=0,count2=0;;
int arr[]={1,0,2,0,2,1,1};


for(i=0; i<n; i++)
{
if(arr[i]==0)
count++;
else if(arr[i]==1) 
count1++;
else 
count2++;
}

i=0;
while(count--) 
arr[i++]=0;
while(count1--) 
arr[i++]=1;
while(count2--) 
arr[i++]=2;


for(int i=0; i<n; i++)
printf("%d ", arr[i]);
return 0;
}