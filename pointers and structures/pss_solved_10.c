#include<stdio.h>

struct s1
    {
        char *str;
        struct s1 *next;
    };
void swap(struct s1 *,struct s1 *);
void main()
{
    
    static struct s1 a[] = {
                                    {"Akhil",a+1},
                                    {"Nikhil",a+2},
                                    {"Anant",a}
                           };

    struct s1 *p[3];
    int i;
    for(i=0;i<=2;i++)
    {
        p[i]=a[i].next;
    }

    printf("\n%s  %s  %s", p[0]->str, (*p)->str, (**p).str);
    swap(*p,a);
    printf("\n%s",p[0]->str);
    printf("\n%s",(*p)->str);
    printf("\n%s",(*p)->next->str);
    swap(p[0],p[0]->next);
    printf("\n%s",p[0]->str);
    printf("\n%s", (*++p[0]).str);
    printf("\n%s", ++(*++(*p)->next).str);
}

void swap(struct s1 *p1,struct s1 *p2)
{
    char *temp;
    temp = p1->str;
    p1->str=p2->str;
    p2->str=temp;
}