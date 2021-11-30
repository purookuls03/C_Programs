#include<stdio.h>
void main()
{
    int i=3, *x;
    float j=1.5, *y;
    char k='c', *z;
    printf("Value of i : %d\n", i);
    printf("Value of j : %f\n", j);
    printf("Value of k : %c\n", k);
    x=&i;
    y=&j;
    z=&k;
    printf("Address of i : %u\n", x);
    printf("Address of j : %u\n", y);
    printf("Address of k : %u\n", z);
    x++;    y++;    z++;
    printf("New Address of i : %u\n", x);
    printf("New Address of j : %u\n", y);
    printf("New Address of k : %u\n", z);
}