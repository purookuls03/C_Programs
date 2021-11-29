#include<stdio.h>
#include<string.h>

int puroo(char ch1[],char ch2[])
{
	 int res=0;
	 
	if(strcmp(ch1,ch2)==0)
	{
		res=1;
		//printf("both are equal\n");
	}
	else{
	    // printf("both are not equal\n");
	res=0;
	}
	
	return res;
	
}

int puroolen(char ch2[])
{
		int i, count=0;
		
						
		
		
		while (ch2[count]!='\0')
		{
			printf("\ncount=%d", count);
				count++;
			
		}
		
		
		return count;
}

void main()
{
	char ch1[50],ch2[50], ch3[50];
	int comp, len;
	
	printf("Enter the first element : ");
	scanf("%s", &ch1);
	
	printf("Enter the second element : ");
	scanf("%s", &ch2);
	
	//comp=puroo(ch1,ch2);
	
	//if(comp==1)
	if(puroo(ch1,ch2)==1)
	{
			printf("both are equal\n");
	}
	else
	{
		printf("both are not equal\n");
	}
	
	printf("comp=%d\n", comp);
	
	
	len=puroolen(ch2);
	printf("\nlength of element 2 = %d", len);
	
}
