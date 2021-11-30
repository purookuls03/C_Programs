#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *name[5];
    char str[20];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter any name : ");
        gets(str);
        name[i]=malloc(strlen(str));
        strcpy(name[i],str);
    }

    // printf("hello");]'
    for(i=0;i<5;i++)
        printf("\n%s ", name[i]);

}