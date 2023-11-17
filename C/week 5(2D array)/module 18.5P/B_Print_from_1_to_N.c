#include<stdio.h>
void print1ToN(int n){
    if(n==0)return;
    print1ToN(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    print1ToN(n);
    return 0;
}