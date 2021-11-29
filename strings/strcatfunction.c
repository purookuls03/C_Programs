#include<stdio.h>
#include<string.h>


int puroocat(char ch1[],char ch2[],char ch3[])
{
	int i=0,k=0;
	
	printf("outside first loop ch1 : %s\n", ch1);
	printf("outside first loop ch2 : %s\n", ch2);
	
	/*for(i=0;i<50;i++)
	{
		ch3[k]=ch1[i];
		k++;
		
		printf("inside first loop : %s\n", ch3);
	}*/
	
	while(ch1[i]!='\0')
	{
		
		ch3[k]=ch1[i];
		i++;
		k++;
		printf("inside first loop  : %s\n", ch3);
	}
		
	
	printf("outside second loop : %s\n", ch3);
	
	for(i=0;i<50;i++)
	{
        ch3[k]=ch2[i];
		 k++;  

		printf("inside second loop : %s\n", ch3);
	}
	
	ch3='\0';
	
	
	
	return k;

}

void main()
{
	char ch1[50], ch2[50], ch3[100];
	int res;
	
	printf("Enter your first element : ");
	scanf("%s", &ch1);
	
	
	printf("Enter your first element : ");
	scanf("%s", &ch2);
	
	res=puroocat(ch1,ch2,ch3);
	
	printf("res=%s", ch3);

}