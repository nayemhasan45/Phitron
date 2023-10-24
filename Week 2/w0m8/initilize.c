#include<stdio.h>
int main()
{
    char arr[]="nayem";
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c",arr[i]);
    // }
    int sz=sizeof(arr);
    printf("%d",sz);
    printf("%s",arr);
    
    return 0;
}