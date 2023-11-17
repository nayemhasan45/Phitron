#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            if(arr[i][j]==x){
                flag=1;
                break;
            }else
            {
                flag=0;
            }
            
        }
    }
    if (flag)
    {
        printf("will not take number");
    }else
    {
        printf("will take number");
    }
    return 0;
}