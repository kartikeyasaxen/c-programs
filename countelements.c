//WAP to input an array of N number of elements and count total number of positives,negatives and zero elements in that array and display those counts.
#include<stdio.h>
int main()
{
    int n,p=0,c=0,z=0,i;
    printf("enter no of elements");
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        p++;
        else if(a[i]==0)
        c++;
        else
        z++;
    }
   
    printf("positive=%d",p);
    printf("negative=%d",z);
    printf("zero=%d",c);
}

