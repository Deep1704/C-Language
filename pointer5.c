#include<stdio.h>
void main()
{
	int i,L;
	char str[10],*ptr;
	ptr=str;
	scanf("%s",str);
	L=strlen(str);
	for(i=0;i<L;i++)
	{
		printf("%c is at location %u\n",*(ptr+i),ptr+i);
	}

}