#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    int len= strlen(s);
    fgets(s,1000001,stdin);
    // gets(s);
    for (int i = 0; s[i] !='\\'; i++)
     {
        printf("%c",s[i]);
     }
    
    // printf("%s",s);
    return 0;
}