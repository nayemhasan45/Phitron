#include<stdio.h>
int sum(int x,int y){
    int sum=x+y;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int total = sum(a,b);
    printf("%d",total);
    return 0;
}