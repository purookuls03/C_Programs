//WAP to find a grade of a student given his marks

#include<stdio.h>

void main()
{
	int a;
	
	printf("Enter the  marks : \n");
	scanf("%d", &a);

	if (a>89)
		printf("The student will be awarded as A ");
	
	else if (a>79)
		printf("The student will be awarded as B");

	else if (a>69)
		printf("The student will be awarded as C");

	else if (a>59)
		printf("The student will be awarded as D");
	
	else if (a>0)
		printf("The student will be awarded as F");

	else 
		printf("Invalid marks");
	

}