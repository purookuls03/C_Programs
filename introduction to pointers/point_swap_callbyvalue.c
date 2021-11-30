#include<stdio.h>
void swap(int , int );
void main()
{
    int a=10, b=70;
    swap(a,b);
    printf("\nbefore swaping value of a : %d", a);
    printf("\nbefore swaping value of b : %d", b);
}

void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swaping value of x : %d", x);
    printf("\nAfter swaping value of y : %d", y);
}