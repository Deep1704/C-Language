#include<stdio.h>
void main()
{
	int i,sum,n;
	i=1;
	sum=1;
	printf("enter n=");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=i*sum;
		i++;
	}
		printf("Answer=%d",sum);	
}