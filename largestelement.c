//WAP to input an array of N number of elements and find the largest element in that array.
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>a[0])
        
        a[0]=a[i];

    }
    printf(" largest %d",a[0]);
}