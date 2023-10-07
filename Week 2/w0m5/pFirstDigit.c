#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    while (i>=10)
    {
        i=i/10;
    }
    if (i%2==0)
    {
        printf("EVEN");
    }else
    {
        printf("ODD");
    }
    return 0;
}