#include<stdio.h>
void main()
{
	int i,sum,x,y;
	i=1;
	sum=1;
	printf("enter x=");
	scanf("%d",&x);
	printf("enter y=");
	scanf("%d",&y);
	while(i<=y)
	{
		sum=x*sum;
		i++;		
	}
		printf("Answer=%d",sum);	
}