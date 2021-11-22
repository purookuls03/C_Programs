#include <stdio.h>

int max(int num1,int  num2)
{
   	 if (num1>num2)
	  return num1;
    	else 
	  return num2;
}

int min(int num1,int  num2) 
{
    	if (num1>num2)
	  return num2;
    	else
	  return num1;
}


void main() 
{
    	int num1, num2, maximum, minimum;
    
  	 printf("Enter any two numbers: \n");
   	 scanf("%d", &num1);
	 scanf("%d", &num2);
    
    	maximum = max(num1, num2);  
    	minimum = min(num1, num2);  
    
   	 printf("Maximum = %d, Minimum=%d\n", maximum, minimum);
    
    
    
}