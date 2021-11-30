#include<stdio.h>
void swap(int *, int *);
void exchange(int **, int *);
int main()
{
    int c=10,d=20;
    printf("before swap(), c=%d d=%d\n", c, d);
    swap(c,d);
    printf("After swap(), c = %d    d = %d\n", c, d);
    return 0;
}

void swap(int *cc,int *dd)
{

    exchange(&cc,dd);
    
}

void exchange(int **cc, int *dd)
{
    printf("hi\n");
    int t;
    printf("1.hola\n");
    t=**cc;
    printf("2.hola\n");
    **cc=*dd;
    *dd=t;
    printf("hola\n");
}