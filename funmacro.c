#include<stdio.h>
int display();

int main()
{
    printf("%s \n",__FUNCTION__);
    display();
}
int display()
{
   printf("%s \n",__FUNCTION__); 
}
//__FUNCTION__  MACRO WORKING
// RETURNS IN WHICH FUNCTION YOUR ARE IN
