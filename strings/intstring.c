#include<stdio.h>

void main()
{
	char s[100];
	printf("Enter the string : ");
	scanf("%[^\n]s", s);
	
	printf("you entered the string is : %s", s);
}