#include<stdio.h>
void main()
{
	int i,n,sum=0;
	i=1;
	printf("enter n=");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
		if(sum==n)
		{
			printf("The given Number is Perfect");
		}
		else
		{
			printf("The given Number is Not Perfect");
		}

}