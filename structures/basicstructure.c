#include<stdio.h>

struct employee
{
	int id;
	float marks;
	
};

void main()
{
	struct employee e1, e2, e3;
	e1.id=10;
	e2.marks=2.5;
	
	printf("e1=%d\n", e1.id);
	printf("e2=%f", e2.marks);
	
}