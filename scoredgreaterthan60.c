//wap to take marks of n number of students and count the no of students who scored marks greater than 60.
#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter no of students");
    scanf("%d",&n);
    int a[n];
     printf("enter marks");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    if(a[i]>60)
    {
    c++;}
     
     printf("%d",c);

}