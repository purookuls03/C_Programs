#include<stdio.h>
#include<string.h>
void main()
{
    char str[5]="124";
    int temp,i;
    for(i=0;i<=4;i++)
    {
        temp=str[i]%10;
        printf("%d", temp);
        str[i]=str[i]/10;
    }

    // printf("%s", str);
}