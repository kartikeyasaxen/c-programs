#include<stdio.h>
int main()
{
	float d,w,y;
	printf("enter days");
	scanf("%f",&d);
	w=(d*1)/7;
	y=(1*d)/365;
	printf("weeks %f",w);
	printf("years %f",y);
	return 0;
}