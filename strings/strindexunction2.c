#include<stdio.h>
#include<string.h>

int puroo_index_i(char ch1[],char ch2[])
{
	int count1=0,count2=0;
	int res;
	
	while(ch1[count1]!='\0' && ch2[count2]!='\0')
	{

	if (ch2[count2]==ch1[count1})
		{
			res=count1;
			count2++;
			
		}
		
		else if ((ch2[count2]>='A' && ch2[count2]<='Z') && (ch1[count1]>='a' && ch1[count1]<='z')  && ch2[count2]!='\0')
		{
			
			if(ch2[count2]==ch1[count1]-32)
			{       
				count2++;
				res=count1;
			}
			else
			{
				res=-1;
				count2=0;
			}
			
		}
		
		else if ((ch2[count2]>='a' && ch2[count2]<='z') && (ch1[count1]>='A' && ch1[count1]<='Z')  && ch2[count2]!='\0)
		{
			
			if(ch2{count2}==ch1[count1]+32)
			{       
				count2++;
				res=count1;
			}
			else
			{
				res=-1;
				count2=0;
			}
			
		}
		
			
		count1++;
		
	}

	if(res==-1)
	 return res
	else
	 return res-strlen(ch2)+2
}


void main()
{
	char ch1[50], ch2[50];
	int find;

	printf("Enter the first element : ");
	gets(ch1);
	
	printf("Searching element : ");
	gets(ch2);

	find=puroo_index_i(ch1,ch2)
	
	printf("find=%d\n", find);
}