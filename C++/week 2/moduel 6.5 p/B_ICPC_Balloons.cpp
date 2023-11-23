#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[26]={0};
        for(char c:s){
            arr[c-'A']++;
        }
        int ans=0;
        for (char i = 'A'; i <= 'Z'; i++)
        {
            if (arr[i-'A']!=0)
            {
                ans+=2;
                ans+=arr[i-'A']-1;
            }          
        } 
        cout<<ans<<endl;     
    }
    
    return 0;
}