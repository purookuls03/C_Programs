// Make a programm to choice the arthmetical operators


#include<stdio.h>

int main()
{
	int a, b;
	int op;
	
	printf("Enter the number a \n");
	scanf("%d", &a);

	printf("Enter the number b \n");
	scanf("%d", &b);

	printf("Choices\n 1.Add\n 2.Subtract\n 3.multiply\n 4.quotient\n 5.Remainder\n");
	printf("Enter your Choice :");
	scanf("%d", &op);
	
	if (op==1){
	printf("%i", (a+b));
	}
	else if (op==2){
	printf("%i", (a-b));
	}
	else if (op==3){
	printf("%i", (a*b));
	}
	else if (op==4){
	printf("%i", (a/b));
	}
	else 
	{
	printf("%i", (a%b));
    	}

	return 0;
}