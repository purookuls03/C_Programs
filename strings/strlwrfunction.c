#include<stdio.h>
#include<string.h>

int puroolwr(char ch1[])
{
	int i=0;
	while(ch1[i]!='\0')
	{
		if (ch1[i]>='A' && ch1[i]<='Z')
		{
				ch1[i]=ch1[i]+32 ;     
		}
		i++;
	}
	
	return i;
}


void main()
{
	char ch1[50];
	int lower;
	
	printf("Enter the element : ");
	gets(ch1);
	
	lower=puroolwr(ch1);
	
	printf("lowercase=%s\n", ch1);

}