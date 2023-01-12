//wap to take an array from user and find position of a user given elements.
#include<stdio.h>
int main()
{
		int n,p,f=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("input no.");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		if(a[i]==p)
		printf("%d",i+1);
	f++;
	}
	if(f==0)
	printf("not found");
	}