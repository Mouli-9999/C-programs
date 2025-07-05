#include<stdio.h>
void main()
{
    struct employee
    {
        int id;
        char name[20];
        float salary;
    }emp={1001,"Mouli",60000.00};

    printf("Id is: %d \n",emp.id);
    printf("Name is: %s \n",emp.name);
    printf("Salary is: %.2f \n",emp.salary);
    
}