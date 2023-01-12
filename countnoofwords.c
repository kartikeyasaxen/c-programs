//wap to count no of words in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++)
    if(s[i]==' ')
    c++;
    printf("words=%d",c+1);
    return 0;
    }