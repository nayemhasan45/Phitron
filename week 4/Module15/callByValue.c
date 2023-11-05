#include<stdio.h>
void fun(int x){
    x=100;
    printf("x er value from fun -%d\n",x);
}
int main()
{
    int x =200;
    fun(x);
    printf("x er value form main - %d",x);
    return 0;
}