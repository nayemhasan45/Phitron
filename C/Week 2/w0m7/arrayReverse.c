#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //doing it normally
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    //now doing it reverse
    for(int j=n-1;j>=0;j--){
        printf("%d\n",arr[j]);
    }
    return 0;
}