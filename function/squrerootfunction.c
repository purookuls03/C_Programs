#include<stdio.h>
#include<math.h>

int sqrt1(int num1)
{
	int a;
	a=sqrt(num1);
		return a;
}






void main()
{
	int num1, squareroot;
	
	printf("Enter the square number : \n");
	scanf("%d", &num1);
	
	squareroot=sqrt1(num1);
	printf("squareroot=%d", squareroot);
	
}