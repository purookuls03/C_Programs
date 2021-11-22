#include<stdio.h>
int sumdig(int);
void main()
{
    int a;
    a=sumdig(123456);
    printf("\n%d", a);
}

int sumdig(int num)
{
    static int sum;
    int a,b;
    a=num%10;
    b=(num-a)/10;
    sum=sum+a;
    if(b!=0)
        sumdig(b);
    else
        return sum;
}



