#include<stdio.h>
void main()
{
    char c='A', *cc;
    int i=54, *ii;
    float f=3.14, *ff;

    cc=&c;
    ii=&i;
    ff=&f;

    printf("\nAddress contained in char c : %u", &c);
    printf("\nAddress contained in char c : %u", cc);
    printf("\nValue of c : %c", c);
    printf("\nValue of c : %c", *cc);
    printf("\nValue of c : %c\n", *(&c));
   
    printf("\nAddress contained in int i : %u", &i);
    printf("\nAddress contained in int i : %u", ii);
    printf("\nValue of i : %d", i);
    printf("\nValue of i : %d", *ii);
    printf("\nValue of i : %d\n", *(&i));
   
    printf("\nAddress contained in float f : %u", &f);
    printf("\nAddress contained in float f : %u", ff);
    printf("\nValue of f : %f", f);
    printf("\nValue of f : %f", *ff);
    printf("\nValue of f : %f", *(&f));

}