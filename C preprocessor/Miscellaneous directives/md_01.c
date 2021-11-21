#include<stdio.h>

void fun1();
void fun2();

#pragma startup main
#pragma exit fun2

void main()
{
    printf("inside main\n");
}

void fun1()
{
    printf("inside fun1\n");
}

void fun2()
{
    printf("inside fun2\n");
}

