#include<stdio.h>
void display1(int );
void display2(int * );
void main()
{
    int i;
    int marks[]={55,65,75,56,78,78,90};
    for(i=0;i<=6;i++)
        display1(marks[i]);
    printf("\n");    
    for(i=0;i<=6;i++)
        display2(marks[i]);
}

void display1(int m)
{
    printf("%3d", m);
}

void display2(int *n)
{
    
    printf("%3d ", n);
}