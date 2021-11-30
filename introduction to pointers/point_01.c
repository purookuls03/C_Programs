#include<stdio.h>
void main()
{
    int i=2;
    printf("Value of i : %u", i);
    printf("\nAddress of i : %u", &i);
    printf("\nValue of i : %u", *(&i));
    
}