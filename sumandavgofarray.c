//wap tp input an array and print sum and average of all the elements.
#include<stdio.h>
int main()
{
    int n,i,sum=0,avg=0;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
     printf("enter elements of array");
    for(i=0;i<n;i++)
   
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    if(n!=0)
    {
    sum=sum+a[i];
    avg=(avg+a[i])/2;
    }
    for(i=0;i<n;i++)
    printf("sum=%d",sum);
    printf("avg=%d",avg);
}
