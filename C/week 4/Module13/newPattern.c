#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=(2*n)-1;
    int s=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        k-=2;
        s++;
        printf("\n");
    }
    
    return 0;
}