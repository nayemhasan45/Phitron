#include<bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int fsum=0;
        int lsum=0;
        for (int i = 0; i < 3; i++)
        {
            fsum+=s[i]-48;
        }
        for (int i = (s.length()-1); i >=(s.length()-3) ; i--)
        {
            lsum+=s[i]-48;
        }
        if(fsum==lsum){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}