#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int cnt [26]={0};
    for (int i = 0; i < strlen(a); i++)
    {
        char val =a[i]-97;
        cnt[val]++;
        // printf("%d ",val);
    }
    for (int i = 0; i < strlen(a); i++)
    {
        //  if (cnt[i]!=0)
        //  {
        //     printf("%c - %d\n",i+'a',cnt[i]); 
        //  }
        int val =a[i]-'a';
        if (cnt[val]!=0)
        {
            printf("%c - %d\n",val+'a',cnt[val]);
        }
        
        cnt[val]=0;
         
    }
    
    
    return 0;
}