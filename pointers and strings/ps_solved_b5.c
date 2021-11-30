#include<stdio.h>
#include<string.h>
void main()
{
    char *str[]={"frogs","do","not","die.","they","croak!"};
    int i;
    for(i=0;i<6;i++)
        printf("%s  %d\n", str[i], strlen(str[i]));
}