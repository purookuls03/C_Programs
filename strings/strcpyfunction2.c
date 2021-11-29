#include<stdio.h>
#include<string.h>

int cpy(char ch1[],char ch2[])
{
	int count=0;
	
	printf("before loop = %c", ch2[count]);
	
	while(ch1[count]!='\0')
	{
		ch2[count]=ch1[count];
		count++;
		printf("inside loop = %c", ch2[count]);
	}
	
	ch2='\0';

	return count;
}

void main()
{
	char ch1[50], ch2[50];
	int copy;
	
	printf("Enter the first element : ");
	scanf("%s", ch1);
	
	copy=cpy(ch1,ch2);
	
	printf("after calling = %s", ch2);

}