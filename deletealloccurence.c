
//wap to take an array from user and take an element to delete and delete all occurence of that elemen#include<stdio.h>
#include<stdio.h>
int main()
{
     int n,p,j;
    printf("enter no of elements");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter no to delete");
    scanf("%d",&p);
    int i=0;
    while(i<n){
    
    if(a[i]==p){
        for(j=i;j<n-1;j++)
        a[j]=a[j+1];
        n--;
        i--;
        
    }i++;}
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);

}