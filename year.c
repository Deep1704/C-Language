#include<stdio.h>
void main()
{
	int year;
	printf("enter year=");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("Year is leap year");
	}
	else if(year%4==0 && year%100!=0)
	{
		printf("Year is leap year");
	}
	else
	{
		printf("Year is not a leap year");
	}	
}