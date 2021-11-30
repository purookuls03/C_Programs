#include<stdio.h>
void main()
{
    char str1[]="Hello";
    char str2[20];
    char *p="Puroo";
    char *s;
    /*str2=str1; */                       //error
    s=p;                                 //work
    printf("%s ", s);
   /* str1="bye";     */                    //error
    s="kulshrestha";                     //work
     printf("%s ", s);
}