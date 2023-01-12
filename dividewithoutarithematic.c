//wap to divide a no by 32 without using /.
#include <stdio.h>
int main()
{ 
    int n,b;
    printf("enter no");
    scanf("%d",&n);
    b=(n>>5);
    printf("%d",b);
    return 0;
}