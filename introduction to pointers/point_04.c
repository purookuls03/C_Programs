#include<stdio.h>
void main()
{
    int i=10;
    float f=3.14;
    char *aa,*bb;
    aa=(char *)&i;
    bb=(char *)&f;

    printf("\nAddress containe in aa : %u", aa);
    printf("\nValue at i : %d", *aa);
    printf("\nValue at f : %f", *bb);
}