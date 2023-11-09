#include<stdio.h>
void newValue(int i){
    if (i==0) return;
    printf("%d\n",i);
    newValue(i-1);
}
int main()
{
    // int i=1;
    newValue(6);
    return 0;
}