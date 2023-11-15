#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    while (i<j)
    {
        if (arr[i]<arr[j])
        {
            int tem = arr[i];
            arr[i]=arr[j];
            arr[j]=tem;
        }
        i++;
        j--;
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }
    printf("%lld",sum);
    return 0;
}