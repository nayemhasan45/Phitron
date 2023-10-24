#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int pos = abs(sum);
    printf("%d",pos);
    
    
    return 0;
}