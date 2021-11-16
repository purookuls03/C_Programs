#include<stdio.h>

void main()
{
	int amount;
	
	printf("Please input amount for withdraw : ");
	scanf("%d", &amount);

	
	printf("Required notes of Rs. 100 :  %d\n", (amount/100));
	
	printf("Required notes of Rs. 50 :  %d\n", (amount%100)/50);
	
	printf("Required notes of Rs. 10 :  %d\n", (((amount%100)%50)/10));
	
	printf("Amount still remaining Rs :  %d\n", (((amount%100)%50)%10));
	

}