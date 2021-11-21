#include<stdio.h>

#define BIGGER(x,y) (x>y ? x : y)

void main()
{
    int num1,num2,i;

    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    i=BIGGER(num1,num2);
    if(i)
        printf("%d",i);
    else
        printf("both are equal");
    
    
}