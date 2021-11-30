#include<stdio.h>
int *fun();
int main()
{
    int *p;
    p=fun();
    printf("\n%u", p);
    printf("\n%d", *p);
    return 0;
}

int *fun()
{
    static  int i=20;
    return (&i);
}