#include<stdio.h>
int main()
{
	float m,p,c,t;
	printf("maths");
	scanf("%f",&m);
	printf("phy");
	scanf("%f",&p);
	printf("chem");
	scanf("%f",&c);
	t=m+p+c;
	if(m>=65&&p>=55&&c>=50&&t>=180)
	printf("eligible");
	else
	printf("not eligible");
	return 0;
}