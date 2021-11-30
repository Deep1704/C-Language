#include<stdio.h>
void main()
{
	char ch;
	printf("enter ch=");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("Character is small letter");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("Character is Capital letter");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Character is Digit");
	}
	else
	{
		printf("Character any Special Character");
	}  	

}