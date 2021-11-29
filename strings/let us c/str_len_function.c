#include<stdio.h>
#include<string.h>

int xstrlen(char *);

void main()
{
    char arr[]="PUROO";
    int len1,len2;

    len1=xstrlen(arr);
    len2=xstrlen("Humpty");

    printf("string = %s, length = %d\n", arr, len1);
    printf("string = %s, length = %d\n", "Humpty", len2);


}

int xstrlen(char *s)
{
    int length=0;

    while(*s!='\0')
    {
        length++;
        s++;
    }

    return length;

}