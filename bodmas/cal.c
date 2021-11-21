// Calculation of variables

// C is fun

#include<stdio.h>

int main()
{
	//Use BODMAS
	int a, b, c;
	float e, g, s, z, p;

	printf("Enter the number a \n");
	scanf("%d", &a);
	
	printf("Enter the number b \n");
	scanf("%d", &b);

	c = a / b;
	printf("%d \n", c);

	printf("Enter the number e \n");
	scanf("%f", &e);

	printf("Enter the number f \n");
	scanf("%f", &g);

	s = e * g;
	printf("Result is %d \n", s);

	z = c + s;
	printf("Result is %d \n", z);

	p = z - 100;
	printf("Result is %d \n", p);

	return 0;
}