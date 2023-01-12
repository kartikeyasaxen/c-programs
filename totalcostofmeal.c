//wap to input meal charge of a customer.the tax should be 20% of the meal cost.the tip should be 15%of the total .display total bill.
#include<stdio.h>
void check(int m)
{
    int t,ti,total=0,ntp=0;
    if(m!=0){
t=(20*m)/100;
ti=(15*m)/100;
total=ti+t+m;
ntp=m+ti;
}
printf("after adding tax %d",ntp);
printf("total amount %d",total);
}
int main()
{int m;
printf("enter amount");
    scanf("%d",&m);
    check(m);
}