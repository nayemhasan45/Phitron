#include<stdio.h>
#include<string.h>
int main()
{
    char n[200],m[100];
    scanf("%s %s",&n,&m);
    int len=strlen(n);
    // printf("%d",len);
    for (int i = 0; i <= strlen(m); i++)
    {
        n[len]=m[i];
        len++;
    }
    printf("%s %s",n,m);
    
    return 0;
}