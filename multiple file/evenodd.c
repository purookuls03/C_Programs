#include<stdio.h>

int Even(int num)
{
	if(Even(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
	 
	return num;
}

int Odd(int num)
{
	if(Odd(num))
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number is even");
    }
	
		return num;
}