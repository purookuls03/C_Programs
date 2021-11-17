//WAP to find whter the tank is overflowed , tankfull and Underflow


#include<stdio.h>

int main()
{
	int h, r, f;
	float t;
	float Vtank, Vwater;

	//let the tank be a cylinder

	printf("Enter the height of a tank in cm \n");
	scanf("%d", &h);
	// height be 10cm
	
	printf("Enter the radius of a tank in cm \n");
	scanf("%d", &r);
	// radius be 5cm

	printf("Enter the time \n");
	scanf("%f", &t);

	Vtank=3.14*r*r*h;
	
	Vwater=f*t;

	if (Vwater>Vtank)
	{
	 printf("Overflowed \n");
	 printf("Volume of %f", Vwater-Vtank);
	}

	else if (Vwater<Vtank)
	{
	 float filled_height;
	 printf("Underflow Condition \n");
	 filled_height=Vwater/(3.14*r*r);
	 printf("filled height %f \n", filled_height);
	 printf("Reamining height %0.1f \n", h-filled_height);
	}

	else {
	 printf("Tank full");
	}


	




	return 0;
}