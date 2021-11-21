#include<stdio.h>

void floatprint(float num1)
{
#if (0)
	num1=0.3;
#endif
	printf("%0.2f\n", num1);
}

void floatprintarray(float arr[])
{
 	int i;
	
	for(i=0;i<5;i++)
	{
	  printf("%0.2f\n", arr[i]);
	}
	
	
}

void main()
{
	float num1=0.2, call;
	float arr[5]={0.34,1.36,1.80,1.95,2.55};
	floatprint(num1);
	
	floatprintarray(arr);
	

}