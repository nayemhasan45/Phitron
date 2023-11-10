#include<stdio.h>
int main()
{
    int arr[5][4];
    for (int i = 0; i < 5; i++)
    {
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int row;
    // scanf("%d",&row);
    for (int i = 0; i < 5; i++)
    {
        for(int j=0;j<4;j++){
            if (i==row-1)
            {
                printf("%d ",arr[i][j]);
            }
        }
        // printf("\n");
    }
    //for colum
    int coloum;
    scanf("%d",&coloum);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i][coloum-1]);
    }
    
    
    
    return 0;
}