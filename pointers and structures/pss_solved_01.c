#include<stdio.h>
void f (struct s );
void g (struct s * );
struct s
{
    char c;
    int i;
    float a;
};

int main()
{
    struct s var = {'C',100,12.55};
    f(var);
    g(&var);
    return 0;
}

void f (struct s v)
{
    printf("%c  %d  %f\n", v.c, v.i, v.a);
}


void g (struct s *v)
{
    printf("%c  %d  %f\n", v->c, v->i, v->a);
}