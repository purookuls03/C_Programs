#include<stdio.h>
#include<string.h>
void main()
{
    char *str1="United";
    char *str2="front";
    char *str3;
    str3=strcat(str1,str2);
    printf("%s\n", str3);
}