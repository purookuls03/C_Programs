#include<stdio.h>
#include<string.h>

void main()
{
	char ch[100];
	char ch2[100];
	
	printf("enter the first element : ");
	scanf("%s", &ch);
	
	
	printf("\nenter the first element : ");
	scanf("%s", &ch2);
	
	printf("\nlength of first element : %d", strlen(ch));
	printf("\nlength of second element : %d", strlen(ch2));
	
	strcat(ch,ch2);
	printf("\n%s", ch);
	printf("\n%d", strlen(ch));
		
	strcpy(ch,ch2);
	printf("\n%s", ch);
	printf("\n%d", strlen(ch));
}