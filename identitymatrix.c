//wap to take a matrix from user and check whether it is identity matrix or not.
#include<stdio.h>
int main()
{int i,j,a,b,c1=0,c=0;
    printf("enter no of rows");
    scanf("%d",&a);
    printf("enter no of columns");
    scanf("%d",&b);
    int m[a][b];
     printf("enter element");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        scanf("%d",&m[i][j]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
    if((m[i][j]==1&&(i==j)))
    c++;
    if((m[i][j]==0&&(i!=j)))
    c1++;
    }
    }
if((c&&c1)!=0)
printf("identity");
else
printf("not");
}