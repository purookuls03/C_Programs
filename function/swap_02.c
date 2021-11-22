#include<stdio.h>
#include<conio.h>


void swap(int *,int *);

void main()
{
    int num1=2, num2=5;

    // printf("Enter the first number : ");
    // scanf("%d", &num1);

    // printf("Enter the second number : ");
    // scanf("%d", &num2);

    printf("Numbers before swapping num1 = %d and num2 = %d\n", num1, num2);

    swap(&num1, &num2);
   
    printf("Numbers after swapping num1 = %d and num2 = %d", num1, num2);
    

}



void swap(int *num1,int *num2)
{
    int temp;

    temp=*num1;
    *num1=*num2;
    *num2=temp;

    //  printf("swap num1 = %d\n", num1);
    // printf("swap num2 = %d\n", num2);

}

