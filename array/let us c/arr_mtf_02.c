#include<stdio.h>
void main()
{
    struct
    {
        int x,y;
    }s[]={10,20,15,25,8,75,6,2};

    int *i;
    i=s;

    printf("%d\n", *(i+3));
    printf("%d\n", i[i[1]-i[2]]);
    printf("%d\n", s[i[7].x]);
    printf("%d\n", (*(1+i)**(i+4)));
    printf("%d\n", ++i[i[6]]);
}