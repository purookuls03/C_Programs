#include<stdio.h>
#include<string.h>

void main()
{
    char source[]="PUROO KULSHRESTHA";
    char target[20];
    strcpy(target,source);
    printf("source = %s\n", source);
    printf("target = %s", target);
}