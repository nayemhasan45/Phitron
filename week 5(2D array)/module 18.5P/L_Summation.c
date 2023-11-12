#include<stdio.h>
int sum(int arr[],int n,int i){
    if(i==n)return 0;
    int s=sum(arr,n,i+1);
    return s+arr[i];
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
    int total=sum(arr,n,0);
    printf("%d",total);
    
    return 0;
}