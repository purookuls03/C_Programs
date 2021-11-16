#include<stdio.h>

void main()
{
    int basic_salary; 
	float dallowance, house_rent, gross_salary;
    
	printf("Enter Basic Salary  : ");
    scanf("%d", &basic_salary);

    dallowance = 0.4 * basic_salary;
    house_rent = 0.2 * basic_salary;

    gross_salary = basic_salary + dallowance + house_rent;

    printf("Basic Salary: %d\n",  basic_salary);
    printf("Dearness Allowance: %.2f\n", dallowance);
    printf("House Rent: %.2f\n", house_rent);
    printf("Gross Salary: %.2f\n", gross_salary);

    
    
}