//example on goto to prints week in an order.
#include<stdio.h>
void main()
{

    goto m;
    th:
    printf("Thursday \n");
    f:
    printf("Friday \n");
    goto sa;
    m:
    printf("Monday \n");
    goto tu;
    w:
    printf("Wednesday \n");
    goto th;
    goto f;
    
    su:
    printf("Sunday \n");
    exit(0);
    tu:
    printf("Tuesday \n");
    goto w;
    sa:
    printf("Saturday \n");
    goto su;

}