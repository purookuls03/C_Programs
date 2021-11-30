#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,avg,i,*p,sum=0;
    printf("ENter the number of students : ");
    scanf("%d", &n);
    p=(int *)malloc(n*4);
    // p=(int *)calloc(10, 4);        /*calloc() function works similar to malloc() except for the fact that it needs two arguments.  here 4 indicates that we wish to allocate memory for storing integers(since an integer is a 4-byte entity) and 10 indicates reserve space for storing 10 integers*/
    if(p==NULL)
    {
        printf("Memory allocation unsuccessful\n");
        exit(0);
    }
    printf("Enter marks : ");
    for(i=0;i<n;i++)
        scanf("%d", (p+i));
    for(i=0;i<n;i++)
        sum = sum + *(p+i);
    avg=sum/n;
    printf("Average marks : %d\n", avg);
}