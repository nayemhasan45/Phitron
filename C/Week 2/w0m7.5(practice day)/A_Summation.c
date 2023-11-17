#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    long long int pos = abs(sum);
    printf("%lld",pos);
    return 0;
}