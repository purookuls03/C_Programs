#include<stdio.h>
void main()
{
    char s[]="Oinks Grunts and Guffaws";
    printf("%c\n", *(&s[2]));
    printf("%s\n", s+5);
    printf("%s\n", s);
    printf("%c\n", *(s+2));
    printf("%u\n", s);
}