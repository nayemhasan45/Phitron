#include<stdio.h>
//without using void
int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
// using void as parameter
int sum(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main()
{
    //if you use parameter when it's written void it will give error.
    int s = sum(200);
    printf("%d",s);
    return 0;
}