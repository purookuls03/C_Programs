#include<stdio.h>
 
int sumofarray(int arr[])
{
    int i,sum=0;
 
    for(i=0; i<10; i++)
    {
         sum+=arr[i];
         
    }
 	return sum;
}

void main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,sum;
   
   sum=sumofarray(arr);
    printf("sum of array is :%d\n",sum);
 
    
}