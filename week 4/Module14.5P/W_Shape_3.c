#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for (int i = 0; i < (n*2); i++)
    {
        for(int j=0;j<s;j++){
            printf(" ");
        }
        for(int j=0;j<k;j++){
            printf("*");
        }
        if (i<n-1)
        {
            s--;
            k+=2;
        }
        if(i>=n)
        {
            s++;
            k-=2;
        }
        printf("\n");
        
    }
    
    return 0;
}