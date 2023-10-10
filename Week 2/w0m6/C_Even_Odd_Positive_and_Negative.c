#include<stdio.h>
int main()
{
    int n,even=0,odd=0,pos=0,neg=0,a;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            even++;
        }else
        {
            odd++;
        }

        //check positive and negative

        if(a>0){
            pos++;

        }else if(a<0)
        {
            neg++;
        }
        
        
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
    
    return 0;
}