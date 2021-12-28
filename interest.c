#include<stdio.h>
float interest(int,int,int);
void main()
{
	int P,R,N;
	float intr;

	printf("enter P=");
	scanf("%d",&P);
	printf("enter R=");
	scanf("%d",&R);
	printf("enter N=");
	scanf("%d",&N);

	intr=interest(P,R,N);
	printf("%f",intr);
}
	float interest(int P,int R,int N)
{
	return (P*R*N)/100;
}	