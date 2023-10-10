#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if (x-y>=0)
    {
        printf("%d",x-y);
    }else
    {
        printf("0");
    }
    
    
    return 0;
}