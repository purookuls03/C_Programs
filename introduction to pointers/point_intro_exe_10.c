#include<stdio.h>
void main()
{
    int i=10;
    printf("i = %d      addres of i = %u", i, &i);
    &i = 7200;
    printf("new value of i = %d      new address of i = %u", i, &i);
}