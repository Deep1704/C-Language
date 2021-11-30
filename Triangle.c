#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	if(a==b && a==c)
	{
		printf("Triangle is equalatral");
	}
	else if(a==b && a!=c || a==c && a!=b || b==c && b!=a)
	{
		printf("Triangle is isoscaler");
	}
	else if(((a*a)+(b*b)==(c*c)) || ((b*b)+(c*c)==(a*a)) || ((a*a)+(c*c)==(b*b))) 
	{
		printf("Triangle is Right angle Triangle");
	}
	else
	{
		printf("Triangle IS Scaler");
	} 	
}