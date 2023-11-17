#include<stdio.h>
void fun(int* p){
    // printf("x er address from fun -%d\n",p);
    *p =50;
}
int main()
{
    int x=100;
    fun(&x);
    // printf("x er address from main %d",&x);
    printf("%d",x);
    return 0;
}