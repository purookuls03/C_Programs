#include<stdio.h>
void main()
{
    char *str[]={"frogs","do","not","die.","they","croak!"};
    printf("%d  %d\n", sizeof(str), sizeof(str[0]));
}