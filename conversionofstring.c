//wap to take a string from user and convert it to lower case and upper case.
#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]s",s);
     for(int i=0;s[i]!=0;i++){
     if(s[i]>='A'&&s[i]<='Z')
     s[i]=s[i]+32;
     else
     s[i]=s[i]-32;}
     puts(s);
     return 0;}