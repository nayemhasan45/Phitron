#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++){
       if(i==5){
        break;
       }
       printf("%d\n",i);
    }
    printf("break and create new loop\n");
    int y;
    for(y=1;y<=10;y++){
        if(y==6){
            continue;
        }
        printf("%d\n",y);
    }

    return 0;
}