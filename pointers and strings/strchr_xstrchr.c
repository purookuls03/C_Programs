#include<stdio.h>
#include<string.h>

char *xstrchr(char *, char ); // String , char to be serarched

void main()
{

    char *string="puroo kulshrestha learn programming";
    char ch='s';
    //printf("Before function \n");
   char *res= xstrchr(string,ch);
  // printf("After Function \n");
   printf("%s", *res);
}

char *xstrchr(char *string, char ch)
{
    char *t= string;
    int i;
    while(*t!='\0')
    {
        if (*t==ch)
        {
            printf("%s\n", t);
            return t;
        }
       t++;
    }
    
    return NULL;
}