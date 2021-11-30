#include<stdio.h>
#include<string.h>
int xstrlen(char *);
void main()
{
    char name[25];
    int len;
    printf("Enter any name : ");
    gets(name);

    len=xstrlen(name);
    printf("\n%d", len);

}

int xstrlen(char *p)
{
    int len=0;
    while(*p!='\0')
    {
        len++;
        p++;
    }
    return len;
}