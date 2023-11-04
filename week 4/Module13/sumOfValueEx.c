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
    int x;
    scanf("%d",&x);
    int flag =0;
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==x)
            {
                flag=1;
            }
            
        }
    }
    if (flag)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    
    return 0;
}