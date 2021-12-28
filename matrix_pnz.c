#include<stdio.h>
void main()
{
	int i,j;
	int num[3][3];
	int pos=0,neg=0,zero=0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\n",&num[i][j]);
				if(num[i][j]>0)
			{
			pos++;
			}
				else if(num[i][j]<0)
			{
			neg++;
			}
					else
			{
			zero++;
			}
		}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	printf("positive=%d\n",pos);
	printf("negative=%d\n",neg);
	printf("zero=%d\n",zero);
}

