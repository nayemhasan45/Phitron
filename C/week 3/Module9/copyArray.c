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
    int m;
    scanf("%d",&m);
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&m);
    }
    int newArray[n+m];
    for (int i = 0; i < n; i++)
    {
        newArray[i]=arr[i];
    }
    int i=n;
    for(int j=0;j<m;j++){
        newArray[i]=arr2[j];
        i++; 
    }
    for (int i = 0; i < n+m; i++)
    {
        printf("%d ",newArray[i]);
    }
    
    
    
    return 0;
}