#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=48&&a<=57){
        printf("IS DIGIT");
    }else if (a>=65&&a<=90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }else
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    
    
    return 0;
}