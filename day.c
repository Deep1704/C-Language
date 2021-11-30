#include<stdio.h>
void main()
{
	int day;
	printf("Enter No.=");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("ans.=sunday");
			break;

		case 2:
			printf("ans.=monday");
			break;

		case 3:
			printf("ans.=tuesday");
			break;

		case 4:
			printf("ans.=wednesday");
			break;

		case 5:
			printf("ans.=thursday");
			break;

		case 6:
			printf("ans.=friday");
			break;

		case 7:
			printf("ans.=saturday");
			break;
		}
}			