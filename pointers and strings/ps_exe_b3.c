#include<stdio.h>
void main()
{
    char str[] = "Way of trouble is out through it";
    int i;

    for(i=0;i<=3;i++)
        printf("%c", *(str+i));
    for(i=0;i<=3;i++)
        printf("%c", *(str+18+i));
    for(i=0;i<=13;i++)
        printf("%c", *(str+4+i));
    for(i=0;i<=9;i++)
        printf("%c", *(str+22+i));
    
}