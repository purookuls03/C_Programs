#include<stdio.h>
void main()
{
    char s[]="C smart!";
    int i;
    for(i=0;s[i];i++)
        printf("%c  %c  %c  %c\n", s[i], *(s+i), *(i+s), i[s]);
}