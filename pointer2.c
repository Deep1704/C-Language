#include<stdio.h>
void main()
{
	int a,b,sum;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	sum=a+b;
	int *pa;
	pa=&sum;
	printf("Answer=%d\n",*pa);
	printf("Address=%d\n",pa);
}