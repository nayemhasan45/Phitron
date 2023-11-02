#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n-1,s=1;
    // printf("%d",k);
    for (int i = 0; i < n; i++)
    {
        for (int j=1;j<=k;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=s;j++){
            printf("*");
        }
        k--;
        s+=2;
        printf("\n"); 
    }
    
    return 0;
}