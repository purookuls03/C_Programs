#include<stdio.h>
int main()
{
    char c, *cc;
    int i; long l;  float f;
    c='Z';
    i=999;
    l=77777;
    f=3.14;
    cc=&c;
    printf("c=%c    cc=%u\n", *cc, cc);
    cc=&i;
    printf("i=%d    cc=%u\n", *cc, cc);
    cc=&l;
    printf("l=%ld    cc=%u\n", *cc, cc);
    cc=&c;
    printf("f=%f    cc=%u\n", *cc, cc);
    return 0;
}