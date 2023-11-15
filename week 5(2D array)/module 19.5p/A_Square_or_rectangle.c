#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int h,w;
        scanf("%d %d",&h,&w);
        if (h==w)
        {
            printf("Square\n");
        }else
        {
            printf("Rectangle\n");
        }
    }
       
    return 0;
}