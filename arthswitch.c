//Make a program on arthemetic operators
//C IS FUN

#include<stdio.h>

void main()
{
	int a, b;
	int op;
	
	printf("Enter any number a : \n");
	scanf("%d", &a);

	printf("Enter any number b : \n");
	scanf("%d", &b);

	printf("choose between these operators \n");
	printf("1.add \n2.sub \n3.multiply \n4.quotient \n5.remainder \n");
	printf("Enter your choice between op : ");
	scanf("%d", &op);
	
	switch (op)
	{
		case 1:
			printf("%d", a+b);
			break;
		case 2:
			printf("%d", a-b);
			break;
		case 3:
			printf("%d", a*b);
			break;
		case 4:
			printf("%d", a/b);
			break;
		case 5:
			printf("%d", a%b);
			break;
		default:
			printf("invalid operator");
	}




}