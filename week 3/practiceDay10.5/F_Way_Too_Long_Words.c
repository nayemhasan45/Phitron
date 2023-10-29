#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        char ar[103];
        scanf("%s",&ar);
        int len =strlen(ar);
        if (len<10)
        {
            printf("%s\n",ar);
        }else if (len>10)
        {
            char first=ar[0];
            char last = ar[len-1];
            int mid = len-2;
            printf("%c%d%c\n",first,mid,last);
        }
    }
    
    return 0;
}