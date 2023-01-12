//wap to left rotate a given array by r rotation.
#include<stdio.h>
int main()
{
	int n,i,r,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		printf("enter rotation");
	scanf("%d",&r);

	for(j=1;j<=r;j++)
	{
    int t=a[0];
    for(i=0;i<n-1;i++)
    a[i]=a[i+1];
    a[n-1]=t;}
    	for(i=0;i<n;i++)
printf("%d",a[i]);
}