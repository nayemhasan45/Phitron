#include<stdio.h>
void myAbs(int n){
    if (n>=0)
    {
        printf("%d",n);
    }else if (n<0)
    {
        printf("%d",n*=-1);
    }
    
    
}
int main()
{
    int n;
    scanf("%d",&n);
    myAbs(n);
    return 0;

}