#include<stdio.h>
void main()
{
	int i,j;
	int a[3][3],b[3][3],sum[3][3];

	printf("Matrix a=");	


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
		printf("\n");

		printf("Matrix b=");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\n",&b[i][j]);
		}
	}

		printf("sum of Matrices=");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];

			printf("%d ",sum[i][j]);
		}
			printf("\n");		
	}		
}