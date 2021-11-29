#include<stdio.h>
#include<string.h>

void main()
{
	char ch[100];
	
	printf("Enter the first character of string 1 : ");
	scanf("%s", &ch);
	
	printf("\nlength of string 1 : %d", strlen(ch));
	
	char ch2[100];
	
	strcpy(ch2,ch);
	
	printf("\nname : %s", ch2);
	
	printf("\nlength of string 2 : %d", strlen(ch2));
}