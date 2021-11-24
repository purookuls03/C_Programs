#include<stdio.h>

void main()
{
	 float fahr, celcius;
    
	printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fahr);

    celcius=(fahr-32)*5/9;

    printf("The Temperature in Centigrade Degree: %.2f", celcius);


}