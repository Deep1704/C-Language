#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a=");
	scanf("%d",&a);
	b=a%10;
	if(b%2==0)
	{
		printf("Last digit of no. is even");
	}
	else
	{
		printf("Last digit of no. is odd");
	}
}         