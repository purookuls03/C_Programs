#include <stdio.h>

int main()
{
 	 int a, b, c, p[5], q[5];
	
 	 
	printf("Enter the number of elements in array \n");
 	 scanf("%d", &a);

  	printf("Enter array elements\n");

 	 for (b=0; b<a ;b++)
   	 {
	   scanf("%d", &p[c]);
	 }

	  for (b= a - 1, c=0;b>=0;b--, c++)
    	  {
	    q[c] = p[b];
	  }	
 
	for (c = 0;c<a;c++)
	{
	    p[b] = q[b];
	}

	  printf("Array after reversed : \n");

	  for (b=0; b<a;b++)
   	 { 
	   printf("%d\n", p[b]);
	 }
   
	return 0;
}