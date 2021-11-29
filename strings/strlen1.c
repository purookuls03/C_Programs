#include <stdio.h>
#include <string.h>

void main()
{
	char st[100];
	
	printf("Enter the string : ");
	scanf("%[^\n]s", &st);
	
	printf("\n length of string is : %d", strlen(st));
	

}