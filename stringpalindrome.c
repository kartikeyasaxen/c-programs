//check whether string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,l;
    scanf("%[^\n]s",s1);
    l=strlen(s1);
    for( i=0;i<l;i++)
    s2[i]=s1[l-1-i];
    s2[i]='\0';
    if(strcmp(s1,s2)==0)
    printf("palindrome");
    else
    printf("not");
    return 0;
}