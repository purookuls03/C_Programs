#include<stdio.h>
#include<string.h>

int puroocpy(char ch1[],char ch2[])
{
	int count=0;
	
	
			printf("inside func = %c\n", ch2[count]);
	while(ch1[count]!='\0')
	{
			ch2[count]=ch1[count];
			
			printf("inside loop = %c\n", ch2[count]);
			
			count++;
			
	}
	
		ch2[count]='\0';
	
			printf("outside loop = %c\n", ch2[count]);
	
	return count;
}

void main()
{
	char ch1[50], ch2[50];
	int copy;
	

	printf("Enter the first element : ");
	scanf("%s", &ch1);
	
	copy=puroocpy(ch1,ch2);
	
	printf("second element will be : %s", ch2);


}