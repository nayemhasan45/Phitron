#include<stdio.h>
int main()
{
    int value;
    scanf("%d",&value);
    for(int i=1;i<=12;i++){
        printf("%d * %d = %d\n",value,i,value*i);
    }
    return 0;
}