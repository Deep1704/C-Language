#include<stdio.h>
void main()
{
	int i,n,sum;
	i=1;
	sum=0;
	printf("enter n=");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=(sum)+(i*i);
		i++;
	}
	printf("Answer=%d",sum);
}
