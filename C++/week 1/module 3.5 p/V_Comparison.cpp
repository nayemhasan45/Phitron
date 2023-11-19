#include<bits/stdc++.h>
using namespace std;
int main (){

    int n,b;
    char x;
    cin>>n>>x>>b;
    
    if (int(x)==62)
    {
        if (n>b)
        {
            cout<<"Right";
        }else
        {
            cout<<"Wrong";
        } 
    }else if (int(x)==60)
    {
        if (n<b)
        {
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
        
    }else if(int(x)==61){
        if(n==b){
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }
    return 0;
}