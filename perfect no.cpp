//wap to check given no is perfect or not.
#include<stdio.h>
int main()
{
	int n,i,sum=0,r;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		r=n%i;
		if(r==0)
		{
		 sum=sum+i;
	}}
	if(sum==n)
	printf("perfect");
	else
	printf("not perfect");
	return 0;
}
