// WAP whether the person is allowed to drive or not

// C is fun

#include<stdio.h>

void main()
{
	int age;

	printf("Enter your age \n");
	scanf("%d", &age);

	if (age>=18 && age<=70)
	{
		printf("He have pass to drive the vehicle");
	}

	else
	{
		printf("He cannot allowed to drive");
	}


}