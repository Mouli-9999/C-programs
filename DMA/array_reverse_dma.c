#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int *arr,size,i,temp;

  printf("Enter the size of the array: ");
  scanf("%d",&size);

//   arr=(int *)malloc(size*sizeof(int));             //  malloc()
  
  arr=(int *)calloc(size,sizeof(int));                //  calloc()

  printf("Enter the elements of the array: ");
  for(i=0;i<size;i++) 
  {
    scanf("%d", &arr[i]);
  }

  for(i=0;i<size/2;i++) 
  {
    temp=*(arr+i);
    *(arr+i)=*(arr+size-1-i);
    *(arr+size-1-i)=temp;
  }

  printf("The reversed array is: ");
  for(i=0;i<size;i++) 
  {
    printf("%d ",arr[i]);
  }

  free(arr);                                         //free the memory
  
  arr = (int*)realloc(arr, size * sizeof(int));      //realloc()
}