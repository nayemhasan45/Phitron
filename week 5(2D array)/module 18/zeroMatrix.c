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
    int cnt=0;
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            // printf("%d ",arr[i][j]);
            if (arr[i][j]==0)
            {
                cnt++;
            }
        }
    }
    if (r*c==cnt)
    {
        printf("Null matrix");
    }else printf("not a Null matrix");   

    
    return 0;
}