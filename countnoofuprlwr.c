//wap to take a string from user and count of lower case,upper case,digits,spaces and special characters.
#include<stdio.h>
int main()
{
    char s[100];int u=0,l=0,n=0,sp=0,spc=0;
    scanf("%[^\n]s",s);
     for(int i=0;s[i]!=0;i++){
        if(s[i]>='A' && s[i]<='Z')
        u++;
        else if(s[i]>='a' && s[i]<='z')
        l++;
        else if(s[i]>=0 && s[i]<=9)
        n++;
        else if(s[i]==' ')
        sp++;
        else
        spc++;
     }
     printf("upper case= %d",u);
     printf("lower case= %d",l);
     printf("spaces= %d",sp);
     printf("digits= %d",n);
     return 0;}