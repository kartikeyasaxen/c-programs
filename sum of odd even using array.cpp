#include<stdio.h>
int main()
{
	int n,sum1=0,sum2=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		sum1=sum1+a[i];
		else 
		sum2=sum2+a[i];
	}
	printf("sum even=%d",sum1);
	printf("sum odd=%d",sum2);
	if(sum1==sum2)
	printf("equal");
	else
	printf("not equal");
	}