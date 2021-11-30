#include<stdio.h>
void main()
{
	int i,a,b;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	i=a;
	while(i>=a && i<=b)
	{
		if(i%2==0 && i%3!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}

}