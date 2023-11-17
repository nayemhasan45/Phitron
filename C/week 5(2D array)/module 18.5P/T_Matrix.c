#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum1 = 0,sum2=0;
    for (int i = 0; i < n; i++)
    {
        sum1+=arr[i][i];
        for(int j=0;j<n;j++){
            if (i+j==n-1)
            {
                sum2+=arr[i][j];
            }
        }
    }
        printf("%d",abs(sum1-sum2));
    return 0;
}