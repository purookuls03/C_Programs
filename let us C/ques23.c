#include<stdio.h>

void main()
{
	char ch;
	int ascii;
	
	printf("Enter any character : ");
	scanf("%c", ch);
	ascii=ch;
	printf("Ascii value of ch is : %d", ascii);
	
	if (ascii>=65 && ascii<=90)
        printf("%c is a capital letter");
	
	else if (ascii>=97 && ascii<=122)
        printf("%c is a small letter");
	
	else if (ascii>=48 && ascii<= 57)
        printf("%c is a digit");
	
	else
		printf("Special character");


}