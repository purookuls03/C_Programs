// WAP to use arthmatical operators

//C is fun 

#include<stdio.h>

void main()
{
	int a, b;
	int op;

	printf("Enter any number a : \n");
	scanf ("%d", &a);

	printf("Enter any number b : \n");
	scanf("%d", &b);
	
	printf("choose between thes operators\n");
	printf("1.add \n2.subtract \n3.multiply \n4.quotient \n5.remainder \n");
	printf("Enter your choice operator between (1-5) : ");

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
	}


}