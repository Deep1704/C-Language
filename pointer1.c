#include<stdio.h>
void main()
{
	int a=10;
	int *pa;
	pa=&a;
	printf("%d\n",pa);
	printf("%d",*pa);
}