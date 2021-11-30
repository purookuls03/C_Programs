#include<stdio.h>


struct b
    {
        int i;
        float f;
        char ch;
    };

struct c
    {
        int j;
        float g;
        char ch;
    };

void fun(struct c *);

struct a
{
    struct b x;

    struct c y;
};

void main()
{
    int *p;
    struct a z;
    fun(&z.y);
    printf("%d %f %c\n", z.x.i, z.x.f, z.x.ch);
}

void fun(struct c *p)
{
    int offset;
    struct b * address;
    offset=(char *) & ((struct c *)(&((struct a *)0)->y)->j)-(char *)((struct a*)0);
    address=(struct b *)((char *)&(p->j)-offset);
    address->i=400;
    address->f=3.14;
    address->ch='c';
}