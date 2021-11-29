#include<stdio.h>
#include<string.h>


int str_index(char ch1[],char ch2[])
{
	int count1=0,count2=0,res=-1;
	
	
	while(ch1[count1]!='\0' && ch2[count2]!='\0')
	{
		
		if (ch1[count1]==ch2[count2])
		{
				res=count1;
				count2++;
				printf("inside loop if res = %d\n", res);
		}
		
		else
		{
			res=-1;
			count2=0;
			printf("inside loop else res = %d\n", res);
			
		}
		
		count1++;
	
	}
	
	if(res==-1)
		return res;
	else
		return res-strlen(ch2)+2;

}


int puroo_index_2(char ch1[],char ch2[])
{
	char temp1[50], temp2[50];
	int count1=0,count2=0,res;
	
	printf("ch1=%s\n", ch1);
	
	printf("ch2=%s\n", ch2);
	
	printf("ch1=%d, ch=%d\n", ch1);
	
	strcpy(temp1,strlwr(ch1));
	strcpy(temp2,strlwr(ch2));


	printf("temp1=%d, temp2=%d\n", temp1, temp2);

	return str_index(temp1,temp2);
}

void main()
{
	char ch1[50], ch2[50];
	int find; 
	
	printf("Enter the first element : ");
	gets(ch1);
	
	printf("Searching element : ");
	gets(ch2);

	find=puroo_index_2(ch1,ch2);
	
	printf("%d", find);
}