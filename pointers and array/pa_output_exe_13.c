#include<stdio.h>
void f(int, int *);
void main()
{
    int a[5]={2,4,6,8,10};
    int i, b=5;
    // printf("%u\n", &b);
    for(i=0;i<5;i++)
    {
        f(a[i], &b);
        printf("%d  %d\n", a[i], b);
    }
}

void f(int x, int *y)
{
    // printf("%u\n", y);
    x = *(y) += 2;
}