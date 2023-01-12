//WAP to input an array of N number of elements and display it in reverse order.
#include<stdio.h>
int main()
{
	int n,temp=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	while(i<n)
	{
		temp=a[i];
		a[i]=a[n-1];
		a[n-1]=temp;
		n--;
	}
			for(i=0;i<n;i++)
			printf("%d",a[i]);
		
	}
