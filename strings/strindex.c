#include<stdio.h>
#include<string.h>

int str_index(char ch1[],char ch2[])
{
	int i=0,res=-1, count=0;
	
	printf("ch1=%s\n", ch1);
	printf("ch2=%s\n", ch2);
	printf("i=%d\n", i);
	printf("res=%d\n", res);
	
	
	while(ch1[i]!='\0' && ch2[count]!='\0')
	{
		
		
		printf("inside loop if res ch1 = %c\n", ch1[i]);
		printf("inside loop if res ch2 = %c\n", ch2[count]);
		
		if (ch1[i]==ch2[count])
		{
				res=i;
				
				count++;
				printf("inside loop if res = %d\n", res);
		}
		
		else
		{
			res=-1;
			count=0;
			printf("inside loop else res = %d\n",res);
			
		}
		
		i++;
	
	}
	
	if(res==-1)
		return res;
	else
		return res-strlen(ch2)+2;

}


void main()
{
	char ch1[50], ch2[50];
	int find;
	
	printf("Enter the first element : ");
	gets(ch1);
	
	printf("Enter the second element : ");
	gets(ch2);
	
	find=str_index(ch1,ch2);
	
	printf("find = %d\n", find);
	


}