#include<stdio.h>
void xstrcpy(char *, char *);
void main()
{
    char str1[]="dholpur";
    char str2[20];
    xstrcpy(str2,str1);
    printf("%s ", str2);
}

void xstrcpy(char *p, char *s)
{
    while(*s!='\0')
    {
        *p=*s;
        p++;
        s++;
        
    }
    
    *p='\0';                    // dholpur\0
    
}