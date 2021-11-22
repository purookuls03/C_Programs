#include<stdio.h>

int swap(int num1, int num2)
{
	
	int temp;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	printf("%d      :      %d  \n", num1, num2);
}

void main()
{
	int swaping,num1,num2,a,b;

	printf("Enter the first number : ");
	scanf("%d", &num1);

	printf("Enter the second number : ");
	scanf("%d", &num2);
	
	printf("Number before swapping num1 is %d and num2 is %d\n", num1, num2);
        
	swaping=swap(num1, num2);
	
	printf("Number after swapping num1 is %d and num2 is %d\n", num1, num2);
}	