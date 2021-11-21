#include<stdio.h>

void main()
{
   int arr[]={10,20,30,40,50,60};
    int *j, *k;

    j=&arr[4];
    k=(arr+4);

    printf("j = %u\n", j);
    printf("k = %u\n", k);

    if(j==k)
        printf("Two pointers point at the same location");
    else
        printf("Two pointers do not point at the same loction"); 

}
