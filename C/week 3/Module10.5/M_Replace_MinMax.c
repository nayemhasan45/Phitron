#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0],posMin=0,posMax=0;
    for (int i = 0; i < n; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
            posMin=i;
        }
        if (max<arr[i])
        {
            max=arr[i];
            posMax=i;
        }
    }
    for (int i = 0; i < n; i++)
    {

        int tem = arr[posMin];
        arr[posMin]=arr[posMax];
        arr[posMax]=tem;
    }
    printf("%d %d\n",posMin,posMax);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }   
    return 0;
}