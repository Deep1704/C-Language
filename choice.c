#include<stdio.h>
void main()
{
	int a,b;
	char ch;
	printf("+=addition\n");
	printf("-=substarction\n");
	printf("*=multiplication\n");
	printf("/a=divison\n");
	printf("enter yoyr choice=");
	scanf("%c",&ch);
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);

	switch(ch)
	{
		case '+':
			printf("Ans.=%d\n",a+b);
			break;

		case '-':
			printf("Ans.=%d\n",a-b);
			break;

		case '*':
			printf("Ans.=%d\n",a*b);
			break;

		case '/':
			printf("Ans.=%d\n",a/b);
			break;

		default:
			printf("Please enter char");				
	}
}	