//wap to check whether the given character is vowel or consonat

#include<stdio.h>

int main()
{
	char vowels;
	char c;

	

	printf("Enter any alphabet \n");
	scanf("%c", &c);

	vowels=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

	if (vowels)
	printf("The character is vowels");

	else
	printf("The character is consonat");

	

	return 0;
}