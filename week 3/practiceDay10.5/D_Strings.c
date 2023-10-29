#include<stdio.h>
#include<string.h>
int main()
{
    char s[11],t[11];
    scanf("%s %s",&s,&t);
    int len1,len2;
    len1=strlen(s);
    len2=strlen(t);
    char new[21];
    for (int i = 0; i <= len1; i++)
    {
        new[i]=s[i];
    }
    int tem=len1;
    for (int i = 0; i <= len2; i++)
    {
        new[tem]=t[i];
        tem++;
    }
    char flip = s[0];
    s[0]=t[0];
    t[0]=flip;
    printf("%d %d\n%s\n%s %s",len1,len2,new,s,t);
    return 0;
}