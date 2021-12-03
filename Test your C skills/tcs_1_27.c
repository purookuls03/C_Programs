#include<stdio.h>
void main()
{
    union a
    {
        int i;
        char z[2];
    };

    union a z = {512};
    printf("%d  %d",z.ch[0],z.ch[1]);
}