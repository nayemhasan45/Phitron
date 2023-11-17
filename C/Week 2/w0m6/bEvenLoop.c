#include<stdio.h>
int main()
{
    int x,i=2;
    scanf("%d",&x);
    while (i<=x)
    {
        printf("%d\n",i);
        i+=2;
    }
    if (x<=1)
    {
        printf("-1");
    }
     
    return 0;
}