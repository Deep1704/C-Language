#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	(a>b && a>c)?(printf("a is largest no.")): ((b>c)?(printf("b is largest no.")):(printf("c is largest no.")));
}