#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("enter operation");
	scanf("%c",&ch);{
	switch(ch)
	{
	case +:{
	printf("%d",a+b);
	break;}
	case'd':{
		printf("%d",a-b);
		break;}
		default:
			printf("invalid");
			
	}}}