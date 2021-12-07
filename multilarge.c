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
	(a>b)?(printf("Ans.=%d",a*c)):(printf("Ans.=%d",b*c));
}
