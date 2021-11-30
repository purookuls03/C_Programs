#include<stdio.h>
void main()
{
    char a[]="Visual c++";
    char *b="Visual c++";

    printf("%d  %d", sizeof(a), sizeof(b));
    printf("\n%d  %d", sizeof(*a), sizeof(*b));
}