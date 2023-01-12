//wap to make a function which will work exactly as pow of math.h without using it.
#include<stdio.h>
int power(int a,int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("%d",p);
}
int main()
{
    int c,d;
    scanf("%d",&c);
    scanf("%d",&d);
    power(c,d);
    return 0;
}