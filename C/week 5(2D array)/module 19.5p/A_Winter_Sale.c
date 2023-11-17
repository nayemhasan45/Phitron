#include<stdio.h>
#include<math.h>
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);
    float t=100-x;
    float ans = (100*p)/(t*1.0);
    int roundAns = round(ans);
    printf("%.2f",ans);

    return 0;
}