#include<stdio.h>
int countOdd(int ar[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i]%2!=0)
        {
            count++;
        }
        
    }
    return count;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("%d",countOdd(arr,n));
    
    return 0;
}