#include<stdio.h>
#include<string.h>

struct student
{
int rollno;
char name[50];
};

void main()
{
	int temp;
	struct student st[5];
	printf("%d\n", sizeof(temp));
	printf("%d\n", sizeof(st[0]));
	
	printf("Enter of 5 students : \n");
	
	for(temp=0;temp<5;temp++)
	{
		printf("Enter roll number : ");
		scanf("%d", &st[temp].rollno);
		printf("Enter name : \n");
		scanf("%s", &st[temp].name); 
	}
	
	
	for(temp=0;temp<5;temp++)
	{
			printf("rollno=%d\n", st[temp].rollno);
			printf("name=%s\n", st[temp].name);
	}
	

}