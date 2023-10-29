#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    //useing for loop

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i]=b[i];
    }

    printf("%s\n",a);
    //using builtin function
    char x[100],y[100];
    scanf("%s %s",&x,&y);
    strcpy(x,y);
    printf("%s",x);
    

    return 0;
}