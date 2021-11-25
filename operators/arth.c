
// Make a program to choose between the arthmetic operator

#include<stdio.h>

int main()
{
	int a, b;
	int op;

	printf("Enter any number a : \n");
	scanf("%d", &a);

	printf("Enter any number b :\n");
	scanf("%d", &b);

	printf("Operators \n1.Add \n2.Subtract \n3.Multiply \n4.Quotient \n5.Remainder \n");
	printf("Enter you Choice :");
	scanf("%i", &op);

	if (op==1)
	printf("%i", a+b);

	else if (op==2)
	printf("%i", a-b);

	else if (op==3)
	printf("%i", a*b);

	else if (op==4)
	printf("%i", (a/b));

	else
	printf("%i", (a%b));



	return 0;
}