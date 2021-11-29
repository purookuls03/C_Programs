#include<stdio.h>
#include<string.h>

void main()
{
	char ch[50];
	printf("enter the string : ");
	gets(ch);
	
	printf("\nstring after reverse : %s", strrev(ch));

}