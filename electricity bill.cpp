#include<stdio.h>
int main()
{
	float i,amt,sc,totamt;
	printf("enter units");
	scanf("%f",&i);
	if(i<=50)
	amt=i*0.50;
	else if(i>50&&i<=100)
	amt=0.75*i;
	else if(i>100&&i<=200)
	amt=1.20*i;
	else
	amt=1.50*i;
	sc=amt*0.20;
	totamt=amt+sc;
	printf("bill=%f",totamt);
return 0;
}