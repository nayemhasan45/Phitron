#include<stdio.h>
void swap(int *a,int *b){
    int tem = *a;
    *a=*b;
    *b=tem;
    printf("%d %d",*a,*b);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    return 0;
}