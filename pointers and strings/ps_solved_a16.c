#include<stdio.h>
void main()
{
    char str[]="PUROO";
    char *s;
    s=str+5;
    while(s>=str)
    {
        printf("%c", *s);
        s--;
    }
}