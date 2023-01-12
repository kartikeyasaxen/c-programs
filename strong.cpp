//wap to check no is strong/peterson/krishnmurthy or not.
#include<stdio.h>
int main()
{
	long n,temp,sum=0;
	scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    	int r=n%10;
    	int f=1;
    	for(int i=1;i<=r;i++)
    	f=f*i;
    	sum=sum+f;
    	n=n/10;
    }
    if(sum==temp)
    printf("strong");
    else
    printf("not strong");
    
	}
