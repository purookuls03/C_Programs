#include<stdio.h>

int reverse(int a)
{
	int rev=0,temp;
	
	while(a>0)
	{
		temp=a%10;
		rev=rev*10;
		rev=rev+temp;
		a=a/10;
	}
	
	return rev;
}


void main()
{
	int a, rev;
	
	printf("Enter a number : ");
	scanf("%d", &a);
	
	rev=reverse(a);
	
	printf("reverse = %d", rev);

}