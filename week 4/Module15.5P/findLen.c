#include<stdio.h>
int myLen(){
    char n;
    int cnt=0;
    while (scanf("%c",&n)!=EOF)
    {
        cnt++;
    }
    return cnt;

}
int main()
{
    printf("%d",myLen());
    
    return 0;
}