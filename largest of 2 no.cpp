#include<stdio.h>
int main()
{
	int a,b,ch;
		printf("enter a");
	scanf("%d",&a);
		printf("enter b");
	scanf("%d",&b);
	switch(a>b)
	{
	case 1:
	printf("%d",a);
	break;
	case 0:
	printf("%d",b);
	break;
}
	return 0;
}