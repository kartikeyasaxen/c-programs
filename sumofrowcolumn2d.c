//wap to take an array and print sum of individual row and column.
#include<stdio.h>
int main()
{
    
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<3;i++)
    { int sum=0;
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
      printf("%d\n",sum);
    }
    for(int i=0;i<3;i++)
{ int sum=0;
        for(int j=0;j<3;j++)
        sum=sum+a[i][j];
        printf("%d ",sum);
}
return 0;
}
    

    
    