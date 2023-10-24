#include<stdio.h>
int main()
{

    //array practice
    char arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n",arr[i]);
    }
    //using sizeof
    char array[6];
    printf("%d\n",sizeof(array));
    printf("%d",sizeof(int));


    return 0;
}