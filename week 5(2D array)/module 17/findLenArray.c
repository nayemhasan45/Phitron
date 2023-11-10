#include<stdio.h>
int fun(char ar[],int i){
    if(ar[i]=='\0')return 0;
    int l=fun(ar,i+1);
    return l+1;
}
int main()
{
    char arr[100];
    scanf("%s",&arr);
    int length=fun(arr,0);
    printf("%d",length);
    return 0;
}