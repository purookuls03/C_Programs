#include<stdio.h>
#include<string.h>
void main()
{
    char *s[]={
                "To err is human...",
                "But to really mess things up...",
                "One needs to know C!!"
              };
    int i;
    for(i=0;i<3;i++)
    {
        printf("%s\n", strrev(s[i]));
    }
}