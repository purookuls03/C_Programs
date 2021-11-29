#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="Hello";
    // printf("%s", str);
    char *p;
    p=str;
    while(*p!='\0')
    {
        printf("%c", *p);
        *p++;
    }
}