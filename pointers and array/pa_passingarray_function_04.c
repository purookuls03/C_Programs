#include<stdio.h>
void display1(int *, int);
void display2(int [], int);
void main()
{
    int num[]={24,34,12,44,56,17};
    display1(&num[0], 6);
    printf("\n");
    display2(&num[0], 6);
}

void display1(int *j, int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        printf("element = %-3d", *j);
        j++;
    }    
}

void display2(int j[], int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        printf("element = %-3d", j[i]);
    }    
}