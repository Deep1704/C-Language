#include<stdio.h>
void main()
{
	float i,sum,n;
	i=1;
	sum=0;
	printf("enter n=");
	scanf("%f",&n);
	while(i<=n)
	{
		sum=sum+(1/i);
		i++;
	}
		printf("Answer=%f",sum);	
}