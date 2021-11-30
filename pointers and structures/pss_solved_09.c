#include<stdio.h>

struct s1
    {
        char *str;
        struct s1 *ptr;
    };

void main()
{
    
    static struct s1 a[] = {
                                    {"Nikhil",a+1},
                                    {"Aditya",a+2},
                                    {"Sudheer",a}
                           };

    struct s1 *p[3];
    int i;
    for(i=0;i<=2;i++)
    {
        p[i]=a[i].ptr;
    }

    printf("\n%s", p[0]->str);
    printf("\n%s", (*p)->str);
    printf("\n%s", (**p));

    

}