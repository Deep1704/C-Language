#include<stdio.h>
void main()
{
	int i,n,a,b;
	printf("enter n=");
	scanf("%d",&n);
	a=0;
	b=n;
	while(n>0)
	{
		i=n%10;
		n=n/10;
		a=(a*10)+i;
	}
	if(a==b)
	{
		printf("Number is Palidrome");
	}
	else
	{
		printf("Number is  not Palidrome");
	}				
}