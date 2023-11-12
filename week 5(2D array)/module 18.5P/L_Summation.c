#include<stdio.h>
long long int sum(int arr[],int n,int i){
    if(i==n)return 0;
    long long int s=sum(arr,n,i+1);
    return s+=arr[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long int total=sum(arr,n,0);
    printf("%lld",total);
    
    return 0;
}