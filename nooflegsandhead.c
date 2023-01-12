#include<stdio.h>
int main()
{
	int a,b,h,g;
    printf("enter no of legs");
	scanf("%d",&a);
	printf("enter no of heads");
	scanf("%d",&b);
	g=(a-2*b)/2;
	h=b-g;
	printf("no of goats=%d",g);
	printf("no of hens=%d",h);
	return 0;
}