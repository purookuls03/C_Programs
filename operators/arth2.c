// Make a program to choose between the arthmetic operator

// C is fun

#include<stdio.h>

int main()
{
	int a, b;
	int operators;

	printf("Enter any number a : \n");
	scanf("%d", &a);

	printf("Enter any number b : \n");
	scanf("%d", &b);

	printf("Enter your operators choice: \n");
	printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Quotient \n5.Remainder \n");
	printf("Select your choice ; \n");
	scanf("%d", &operators);

	if (operators==1){
	printf("%d", a+b);
	}

	else if (operators==2){
	printf("%d", a-b);
	}

	else if (operators==3){
	printf("%d", a*b);
	}
	
	else if (operators==4){
	printf("%d", a/b);
	}

	else
	{
	 printf("%d", (a%b));
	}
	
	return 0;
}