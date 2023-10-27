#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=0,max=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<arr[min])
        {
            min=i;
        }
        if (arr[i]>arr[max])
        {
            max=i;
        }
    }
    int tem = arr[min];
    arr[min]=arr[max];
    arr[max]=tem;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}