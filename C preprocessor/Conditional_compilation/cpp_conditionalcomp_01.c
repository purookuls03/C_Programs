#ifdef  CONDITIONAL
    the compiler skip over part of a source code;
    by inserting the preprocessing commands;
    //  #ifdef and; #endif
#endif

#include<stdio.h>

void main()
{
    int a,b;
    a=4,b=6;
    printf("%d", a+b);
}

#ifdef macroname
    statement 1;
    statement 2;
    statement 3;
#endif