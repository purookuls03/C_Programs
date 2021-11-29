#include<stdio.h>
#include<string.h>
void xstrcpy(char *,char *);
void main()
{
    char source[]="Puroo";
    char target[20];
    xstrcpy(target,source);

    printf("source = %s\n", source);
    printf("target = %s", target);

}

void xstrcpy(char *t,char *s);
{
    while(*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}