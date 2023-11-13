#include<stdio.h>
#include<limits.h>
int findMax(int arr[],int n,int i){
    if (arr[i]==arr[n])
    {
        return INT_MIN;
    }
    int ans = findMax(arr,n,i+1);
    if (ans>=arr[i])
    {
        return ans;
    }else
    {
        return arr[i];
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i],0);
    }
    printf("%d",findMax(arr,n,0));
    // findMax(arr,n);

    return 0;
}