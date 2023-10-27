#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100];
    scanf("%s",ar);
    //using gets
    // gets(ar);
    //using fgets

    // fgets(ar,23,stdin);

    // get string lenth
    int len= strlen(ar);
    printf("%d",len);


    return 0;
}