#include<stdio.h>
void printDigit(int n){
    if(n==0)return;
    int s=n%10;
    printDigit(n/10);
    printf("%d ",s);
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int n;
        scanf("%d",&n);
        printDigit(n);
        if (n==0)
        {
            printf("0");
        }
        
        printf("\n");
    }
    
    return 0;
}