#include<stdio.h>

void main()
{
	char s[50]="programming";
	int count=0;
	int k;

	
	for(k=0;k<50;k++)
	{
		if (s[k]=='a' || s[k]=='e' || s[k]=='i' || s[k]=='o' || s[k]=='u')
		{
		 count++;
		}
	}
	
	printf("Counting vowels in string is : %d", count);
	

}