#include<stdio.h>

void main()
{
	int array[10], num, i=1;
	
	printf("Enter a value : ");
	scanf("%d", &num);

	/*printf("Enter the size of array : ");
	scanf("%d", &i);*/
	
	while(i<=1) 
	{
		
		array[i]=num%10;
		printf("%d\n", array[i]);
		num=num/10;
		  printf("array : %d\n", array[i]);                       
		i++;
	}
	
	printf("outside loop : %d\n", array[i]);


}