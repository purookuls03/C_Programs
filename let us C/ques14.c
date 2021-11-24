#include<stdio.h>

void main()
{
	int cost_price,sell_price;
	
	printf("Enter the cost price : ");
	scanf("%d", &cost_price);
	
	printf("Enter the sell price : ");
	scanf("%d", &sell_price);
	
	if(cost_price < sell_price)
	{	
		printf("profit\n");
		int profit=sell_price-cost_price;
		printf("\nprofit = %d", profit);
	}
	
	else
		printf("loss");

}