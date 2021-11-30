#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50};
    char *p;
    p=(char *)a;
    printf("%d", *(a+4));
}