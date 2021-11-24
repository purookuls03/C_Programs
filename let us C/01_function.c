#include<stdio.h>

void fun(int b)
{
    b=60;
    printf("%d\n", b);
}

int main()
{
    int a=1;
    fun(a);
    printf("%d\n", a);

}



