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
    int flag=1;
    if (r==c)
    {
        for (int i = 0; i < r; i++)
        {
            for(int j=0;j<c;j++){
                if (i==j)
                {
                    continue;
                }
                if (arr[i][j]!=0)
                {
                    flag=0;
                }
                
                
            }
        }
        
    }
    else
    {
        flag=0;
    }
    
    if (flag)
    {
        printf("diognal matrix");
    }else
    {
        printf("not diognal matrix");
    }
    
    
    
    return 0;
}