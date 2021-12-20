#include<stdio.h>
void main()
{
	int n,sum=0,x;
	printf("enter n=");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		n=n/10;
		sum=sum+x;
	}
		printf("%d",sum);
}