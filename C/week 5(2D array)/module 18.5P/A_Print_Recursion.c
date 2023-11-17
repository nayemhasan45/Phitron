#include<stdio.h>
void copy (int i){
    if(i==0)return;
    printf("I love Recursion\n");
    copy(i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    copy(n);
    return 0;
}