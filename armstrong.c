//wap to check given no is armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
		long n,c=0,temp,sum=0;
	printf("enter no");
	scanf("%d",&n);
	do
	{
		n=n/10;
		c++;
	}while(n!=0);
	n=temp;
	while(n>0)
	{
		int r=n%10;
		sum=sum+pow(r,c);
		n=n/10;
		
	}
	if(sum==temp)
	printf("armstrong");
	else 
	printf("not");
	return 0;}