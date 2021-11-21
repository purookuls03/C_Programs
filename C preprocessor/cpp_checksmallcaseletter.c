#include<stdio.h>

void main()
{
    char var;

    printf("Enter any variable : ");
    scanf("%c", &var);

    if(var>=65 && var<=90)
    {
        printf("CAPITAL letter");
    }
    else if(var>=97 && var<=122)
    {
        printf("small letter");
    }
    else
    {
        printf("Not defined");
    }

}