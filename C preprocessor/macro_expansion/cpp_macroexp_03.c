#include<stdio.h>
#define and &&
#define arange (a>25 and a<50)

void main()
{
    int a=30;
    if(arange)
        printf("within range");
    else
        printf("out of range");
}