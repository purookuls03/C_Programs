#include<stdio.h>
void main()
{
    int num[]={24,34,12,44,56,17};
    int i;
    for(i=0;i<=5;i++)
    {
        printf("address = %-3u", &num[i]);
        printf("    element : ");
        printf("%-2d %-2d %-2u %-2d\n", num[i], *(num+i), *(i+num), i[num]);
    }
}