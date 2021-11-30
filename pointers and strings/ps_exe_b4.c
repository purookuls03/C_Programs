#include<stdio.h>
void main()
{
    char s[] = "C a of";
    char t[] = "is philosophy of life";
    char u[40];
    char *ss=s, *uu=u, *tt=t;

    while(*ss || *tt)
    {
        while(*ss)
        {
            if ((*uu++ = *ss++)==' ')
                break;
        }

        while(*tt)
        {
            if ((*uu++ = *tt++)==' ')
                break;
        }

    }

    *uu='\0';
    puts(u);

}