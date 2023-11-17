#include<stdio.h>
#include <ctype.h>
int main()
{
    char i;
    scanf("%c",&i);
    if(isupper(i))
        printf("%c",tolower(i));
    else if (islower(i))
        printf("%c",toupper(i));
    return 0;
}