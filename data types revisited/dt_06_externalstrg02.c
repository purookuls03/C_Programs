#include<stdio.h>

static int x=10;

void display();

void main()
{
    int x;
    printf("%d\n", x);
    display();
   
}

void display()
{
    printf("\n%d\n", x);
}