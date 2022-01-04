#include<stdio.h>
void main()
{
	int i;
	int a[5],*ptr;
	ptr=a;
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}

	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
	}

	int sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+*(ptr+i);
		
	}
	printf("Answer=%d",sum);
}