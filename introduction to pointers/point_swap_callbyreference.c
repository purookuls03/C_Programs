#include<stdio.h>
void swap(int *, int *);
void main()
{
    int a=10, b=70;
    printf("\nbefore swapping : %d", a);
    printf("\nbefore swapping : %d", b);
    swap(&a,&b);
    printf("\nafter swapping : %d", a);
    printf("\nafter swapping : %d", b);
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}