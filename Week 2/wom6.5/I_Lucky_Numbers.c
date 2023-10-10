#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    if (y%z==0)
    {
        printf("YES");
    }else if (z%y==0)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    
    

    return 0;
}