#include<stdio.h>
#include<string.h>

int encode(char *, int );
int decode(char *, int );

void main()
{
    char *ch={"Puroo want to learn programming"};
    // printf("\nch = %s", ch);
    printf("\n%s", *(ch++));
    int i=0;
    printf("\ni = %d", i);
    encode(ch,i);
    printf("\nIn main function After encode : %s", ch);
    char *str;
    str=ch;
    decode(str,i);
    printf("\nIn main function After decode : %s\n", ch);
}

int encode(char *t, int i)
{
    printf("\nIn encode function");
    while(*t!='\0')
    {
        printf("\nin encode function inside while loop");
        // *t=*t+i;
         printf("\nAfter encode : %s", *(t++));
        // printf("\nin encode function inside while loop 02");
        // i++;
        // printf("\nin encode function inside while loop 03");   
    }
    // *t='\0';
    // printf("\nin encode function outside while loop");
    // printf("\nAfter encode : %s", *t);
    // return *ch;
}

int decode(char *str, int i)
{
    // printf("\nIn decode function");
    while(str[i]!='\0')
    {
        str[i]=str[i]-1;
        i++;     
    }
    printf("\n\nAfter decode : %s", str);
    return *str;
}