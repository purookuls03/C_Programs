#include<stdio.h>
#include<string.h>
void main()
{
    char s[]="puroo !";
    printf("%d\n", *(s+strlen(s)));
}