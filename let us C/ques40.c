#include<stdio.h>


int armstrong(int originalnum)
{
	int num,temp,count,res=0;
	
	num=originalnum;
	
	while (num!=0) 
	{
		temp=num%10;
        count=temp*temp*temp;
		res=res+count;
        num=num/10;
    }
	
	//printf("res=%d\n", res);
	//printf("count=%d\n", count);

	if(res==originalnum)
	{
		printf("Armstrng number\n");
		return res;
	}
	
	else
	{
			printf("not a armstrong number\n");
			
	}
	
	

}

void main()
{
	int originalnum,arms,res,i;
	
	printf("Enter a three-digit integer: ");
    scanf("%d", &originalnum);
	
	/*for(i=1;i<=500;i++)
	{
		arms=armstrong(i);
	}*/
	
	arms=armstrong(originalnum);
	
	printf("");

}