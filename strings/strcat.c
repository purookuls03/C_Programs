#include<stdio.h>
#include<string.h>

void main()
{
	char ch[50];
	char ch2[50];
	
	printf("enter the element : ");
	scanf("%s", &ch);
	
	
	printf("enter the element : ");
	scanf("%s", &ch2);
	
	strcat(ch,ch2);
	
	printf("result = \n%s", ch);
	

}