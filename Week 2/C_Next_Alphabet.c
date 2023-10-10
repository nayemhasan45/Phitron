#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if (x>='a'&&x<='y')
    {
        x+=1;
        printf("%c",x);
    }else
    {
        printf("a");
    } 
    return 0;
}