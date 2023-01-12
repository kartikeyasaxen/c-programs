#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	(a>b)&&printf("%d",a);
	(a<b)&&printf("%d",b);
	return 0;
}