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


int str_index_i(char ch1[],char ch2[])
{
	int count1=0,count2=0,res;
	
	char tmp1[50];
	char tmp2[50];
	
	strcpy(tmp1,strlwr(ch1));
	strcpy(tmp2,strlwr(ch2));
	
	printf("Char1=%s, Char2=%s \n",tmp1, tmp2);
	
	
	return str_index(tmp1,tmp2);
	
	
	
	
	
	/*
	while(ch1[count1]!='\0' && ch2[count2]!='\0')
	{
		printf("Ascii-Char1=%d, Ascii-Char2=%d \n",ch1[count1], ch2[count2]);
		if (ch2[count2]==ch1[count1])
		{
			res=count1;
			count2++;
			
			printf("inside first if count2=%c\n", ch2[count2]);
		}
		
		else if ((ch2[count2]>='A' && ch2[count2]<='Z') && (ch1[count1]>='a' && ch1[count1]<='z')  && ch2[count2]!='\0')
		{
			
			if(ch2[count2]==ch1[count1]-32)
			{       
			printf("inside Second if else Count1=%d, Char1=%c  count2=%d, ch2=%c\n",count1,ch1[count1], count2,ch2[count2]);
			count2++;
			res=count1;
			}
			else
			{
				res=-1;
				count2=0;
				
				printf("inside second else Count1=%d, Char1=%c  count2=%d, ch2=%c\n",count1,ch1[count1], count2,ch2[count2]);
				
			}
			
			
		}
		else if ((ch2[count2]>='a' && ch2[count2]<='z') && (ch1[count1]>='A' && ch1[count1]<='Z')  && ch2[count2]!='\0')
		{
			
			if(ch2[count2]==ch1[count1]+32)
			{       
			printf("inside Third ifelse Count1=%d, Char1=%c  count2=%d, ch2=%c\n",count1,ch1[count1], count2,ch2[count2]);
			count2++;
			res=count1;
			}
			else
			{
				res=-1;
				count2=0;
				
				printf("inside Third else Count1=%d, Char1=%c  count2=%d, ch2=%c\n",count1,ch1[count1], count2,ch2[count2]);
				
			}
			
		}
		
			printf("inside loop outside if count2=%d\n", count2);
			
		count1++;
		
	}
	
	
			printf("outside loop if count2=%d\n",res);
	
	
	
	if(res==-1)
	{
		return res;
	}
	
	else
		return res-strlen(ch2)+2;
	*/


}


void main()
{
	char ch1[50],ch2[50];
	int find;
	
	printf("Enter the element : ");
	gets(ch1);
	
	printf("Enter the seacrhing element : ");
	gets(ch2);
	
	find=str_index_i(ch1,ch2);

	printf("find = %d\n", find);
}