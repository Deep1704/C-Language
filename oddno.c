#include<stdio.h>
void main()
{
	int a,n;
	a=1;
	printf("Enter No.=");
	scanf("%d",&n);
	while(a<=n)
	{
		if(a%2!=0)
		{
			printf("%d\n",a);
		}
		a++;
	}	
}			
		

	