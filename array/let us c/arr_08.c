#include<stdio.h>

void display(int *,int);

void main()
{
    int num[]={24,34,12,44,56,17};
    display(&num[0],6);

}

void display(int *j,int n)
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        printf("element = %d\n", *j);
        j++;
    }

}