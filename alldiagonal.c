//print all diagonal elements.
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);

    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        if(i==j || i+j==n-1)
        printf("%d",a[i][j]);
        else
        printf("  ");
        printf("\n");}
        return 0;}
