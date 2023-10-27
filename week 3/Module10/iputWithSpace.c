#include<stdio.h>
#include<string.h>
int main()
{
    char ar[22];
    //using gets
    // gets(ar);
    //using fgets

    fgets(ar,23,stdin);
    printf("%s",ar);


    return 0;
}