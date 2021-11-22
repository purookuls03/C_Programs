//WAP to input highest no. between three numbers

#include<stdio.h>

void main()
{
	int a, b, c;
	
	printf("Enter the number a \n");
	scanf("%d", &a);

	printf("Enter the number b \n");
	scanf("%d", &b);

	printf("Enter the number c \n");
	scanf("%d", &c);

	if (a>b && a>c)
	printf("a is highest number among them");

	else if (b>c && b>a)
	printf("b is highest among them");

	else 
	printf("c is highest among them");
}