//reverse a 1d array using function.
#include <stdio.h>
void rev(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int t=a[i];
        a[i]=a[n-i-1];
        a[n-1-i]=t;

    }}
    void print1(int a[],int n)
{
        for(int i=0;i<n;i++){
		
        printf("%d ",a[i]);
        printf("\n");
        }}
        int main()
        {
           int b[]={2,3,4,5,6,7,8};
           int s=sizeof(b)/sizeof(b[0]);
           rev(b,s);
           print1(b,s);
        }
    