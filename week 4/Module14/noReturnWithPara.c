#include<stdio.h>
//void type function didn't return anything
void sum(int a,int b){
    int x=a+b;
    printf("%d",x);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}