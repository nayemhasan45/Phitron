#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=n-1;
    for (int i = 0; i < j; i++)
    {
        int tem =arr[i];
        arr[i]=arr[j];
        arr[j]=tem;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    return 0;
}