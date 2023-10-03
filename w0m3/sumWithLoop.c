#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++){
        printf("%d\n",i);
        sum+=i;    
    }
    printf("sum = %d",sum);

    return 0;
}