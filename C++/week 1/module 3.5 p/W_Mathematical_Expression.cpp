#include<bits/stdc++.h>
using namespace std;
int main (){

    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if (int(s)==43)
    {
        if(a+b==c){
            cout<<"Yes";
        }else{
            cout<<a+b;
        }
    }else if(int (s)==45){
        if (a-b==c)
        {
            cout<<"Yes";
        }else
        {
            cout<<a-b;
        }
    }else if(int (s)==42){
        if(a*b==c){
            cout<<"Yes";
        }else{
            cout<<a*b;
        }
    }
    
    return 0;
}