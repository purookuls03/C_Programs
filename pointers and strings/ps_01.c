#include<stdio.h>
void main()
{
    char name[]="kingsman";
    int i=0;    

    while(name[i])
    {
        printf("%c %c %c %c\n", name[i], i[name], *(name+i), *(i+name));
        i++;
    }
}