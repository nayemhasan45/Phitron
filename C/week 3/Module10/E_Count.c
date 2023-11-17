#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000001];
    // int len=strlen(arr);
    int sum=0;
    scanf("%s",arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        sum+=(arr[i]-'0');
        // printf("%d\n",arr[i]-'0');
    }
    printf("%d",sum);
    // printf("%s\n",arr);
    // printf("%d",len);
    return 0;
}