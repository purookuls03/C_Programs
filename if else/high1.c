// Program to find the highest number in four numbers

#inclue<stdio.h>

void main()
{
	int a, b, c, s;
	
	printf("Enter the value of a \n");
	scanf("%d", &a);	

	printf("Enter the value of b \n");  
	scanf("%d", &b);
	
	printf("Enter the value of c \n");
	scanf("%d", &c);

	printf("Enter the value of s \n");
	scanf("%d", &s);

	if (a>b && a>c || a>s)
	printf("a is highest number among them");
	
	else if (b>c && b>s || b>a)
	printf("b is highest number among them");
        
	else if (c>s && c>a || c>b) 
	printf("c is highest number among them");
        
	else
	
	printf("s is highest number among them");
	
}