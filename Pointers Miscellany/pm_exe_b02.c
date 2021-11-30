#include<stdio.h>
// typedef ++(*(++(*++argv))) 
int main(int argc,char *argv[])
{
    printf("\n%c", ++(*(++(*++argv))));
    return 0;
}