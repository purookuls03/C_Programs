#include<stdio.h>
#include<string.h>

char *xstrstr(char *, char *);

void main()
{
    char *string1="somewhere over the rainbow";
    char *string2="the";
    *xstrstr(string1,string2);
}

char *xstrstr(char *p, char *s)
{
    char *temp=p;
    int i;
    while(*temp!='\0')
    {
        if(*temp==*s)
        {
            printf("string is found");
            return temp;
        }
        temp++;
    }

    return NULL;
}
