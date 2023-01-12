#include<stdio.h>
int main()
{
   int i,n,c=0;
   scanf("%d",&n);
   int a[n];
   printf("enter marks");
   for(i=0;i<n;i++)
  
   scanf("%d",&a[i]);
    for(i=0;i<n;i++){
   if(a[i]>60)
   c++;
   else
   continue;}
   printf("no of students above 60=%d",c);
}