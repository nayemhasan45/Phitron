#include<stdio.h>
int main()
{
    int x =10;
    int*ptr=&x;
    *ptr=15;
    printf("address of x - %p\n",&x);
    printf("value of ptr - %p\n",ptr);
    printf("adress of ptr - %p\n",&ptr);
    printf("%d\n",x);
    printf("ptr value -%d\n",*ptr);
    return 0;
}