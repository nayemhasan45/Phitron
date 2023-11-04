#include<stdio.h>
//without using void
// int sum(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int s=a+b;
//     return s;
// }
int sum(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main()
{
    int s = sum(200);
    printf("%d",s);
    return 0;
}