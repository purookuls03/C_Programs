#include<stdio.h>

void main()
{
    char a;
    unsigned char b;
    int c;
    unsigned int d;
    short int e;
    unsigned short int f;
    long int g;
    unsigned long int h;
    float p;
    double q;
    long double r;

    scanf("%c%c", &a, &b);
    printf("%c  %c", a, b);

    scanf("%d %u", &c, &d);
    printf("%d   %u", c, d);

    scanf("%d %u", &e, &f);
    printf("%d   %u", e, f);

    scanf("%ld %lu", &g, &h);
    printf("%ld   %lu", g, h);

    scanf("%f %lf %Lf", &p, &q, &r);
    printf("%f  %lf  %Lf", p, q, r);

}