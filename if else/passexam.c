// WAP to find student's grade.
// C is fun

#include<stdio.h>

void main()
{
	int rank;

	printf("Enter your marks \n");
	scanf("%d", &rank);

	if (rank>=90 && rank<=100){
		printf("A+ rank");
	}

	else if (rank>=80 && rank<=89){
		printf("A rank");
	}

	else if(rank>=70 && rank<=79){
		printf("B rank");
	}

	else if (rank>=60 && rank<=69){
		printf("C rank");
	}

	else if (rank>=50 && rank<=59){
		printf("D rank");
	}

	else
	{
		printf("Fail");
	}	


}