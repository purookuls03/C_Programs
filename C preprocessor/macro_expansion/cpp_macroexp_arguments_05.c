#include<stdio.h>
#define AREA(x) (3.14*x*x)

void main()
{
    float r1=6.25, r2=2.5, a;

    a=AREA(r1);
    printf("%f\n", a);

    a=AREA(r2);
    printf("%f\n", a);

}