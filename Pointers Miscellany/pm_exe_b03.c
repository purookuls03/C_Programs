#include<stdio.h>

int main()
{
    int i,fun1(),fun2(),fun3();
    int (*f[3])();
    f[0]=fun1;
    f[1]=fun2;
    f[2]=fun3;

    for(i=0;i<=2;i++)
    {
        (*f[i])();
    }
}

int fun1()
{
    printf("Hail\n");
    return 0;
}

int fun2()
{
    printf("the\n");
    return 0;
}

int fun3()
{
    printf("virus\n");
    return 0;
}