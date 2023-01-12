//print matrix in zig zag form.
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
    if(i%2==0)
    for(int j=0;j<n;j++)
    printf("%d ",a[i][j]);
    else
    for(int j=n-1;j>0;j--)
    printf("%d ",a[i][j]);
    printf("\n");}