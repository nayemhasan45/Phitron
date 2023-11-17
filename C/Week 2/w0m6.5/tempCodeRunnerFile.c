#include<stdio.h>
int main()
{
    long long int x,y,z;
    scanf("%lld%lld%lld",&x,&y,&z);
    if (x<y&&x<z)
    {
        y=y-x;
        z=z-x;
        printf("%lld",x);
    }else if (y<x&&y<z)
    {
        x=x-y;
        z=z-y;
        if (z<(x/2))
        {
            printf("%lld",y+z);
        }else
        {
            x=x/2;
            printf("%lld",y+x);
            
        }
        
        
    }else if (z<x&&z<y)
    {
        x=x-z;
        y=y-z;
        printf("%lld",z);
    }
    
    
    
    
    return 0;
}