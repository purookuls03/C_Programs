#include<stdio.h>
void main()
{
    static char *s[] =  {
                            "ice",
                            "green",
                            "cone",
                            "please"
                        };

    static char **ptr[]={s+3,s+2,s+1,s};
    char ***p=ptr;
    printf("%s\n", **++p);
    printf("%s\n", *--*++p + 3);
    printf("%s\n", *p[-2]+3);
    printf("%s\n", p[-1][-1]+1);
    
}