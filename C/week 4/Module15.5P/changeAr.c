#include<stdio.h>
void changeAr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    arr[n-1]=100;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    changeAr(&arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}