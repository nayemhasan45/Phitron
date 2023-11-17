#include<stdio.h>
void nweAr(int ar[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++){
            if (ar[i]>ar[j])
            {
                int tem = ar[i];
                ar[i]=ar[j];
                ar[j]=tem;
            }
            
        }
    }
    printf("%d %d",ar[0],ar[n-1]);
    
    
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
    
    nweAr(arr,n);

    return 0;
}