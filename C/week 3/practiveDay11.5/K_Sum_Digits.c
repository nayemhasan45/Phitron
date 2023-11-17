#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char arr[n+1];
    for (int i = 0; i <= n; i++)
    {
        scanf("%c",&arr[i]);
    }
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        int new=arr[i]-48;
        sum+=new;
    }
    printf("%d ",sum);
    
    return 0;
}