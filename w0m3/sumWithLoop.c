#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        sum+=i;
    }
    printf("sum = %d",sum);

    return 0;
}