#include<stdio.h>

void main()
{
	int year=1, invest, alternate;

    while(alternate>invest)
    {
		alternate = year * 90;
		invest = (1000*year) - 4000;
		year++;
    }

    printf("The Life of Machine: %d years", year);


}