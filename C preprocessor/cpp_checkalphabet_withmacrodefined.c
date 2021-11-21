#include<stdio.h>

#define UPPER(x) (x>=65 && x<=90) 
#define lower(x) (x>=97 && x<=122)

void main()
{
    char var;

    printf("Enter any variable : ");
    scanf("%c", &var);

    if(UPPER(var))
    {
        printf("CAPITAL letter");
    }
    else if(lower(var))
    {
        printf("small letter");
    }
    else
    {
        printf("Not defined");
    }

}