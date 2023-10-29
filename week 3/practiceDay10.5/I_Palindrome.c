#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1001],arr2[1001];
    scanf("%s",arr);
    int len=strlen(arr);
    for (int i = 0; i <= len;i++)
    {
        arr2[i]=arr[i];
    }
    // printf("%s",arr2);
    int j=len-1;
    for (int i = 0; i<j; i++)
    {
        int tem = arr2[i];
        arr2[i]=arr2[j];
        arr2[j]=tem;
        j--;   
    }
    int val=strcmp(arr,arr2);
        if (val==0)
        {
            printf("YES");
        }else
        {
            printf("NO");
        }
    
    return 0;
}