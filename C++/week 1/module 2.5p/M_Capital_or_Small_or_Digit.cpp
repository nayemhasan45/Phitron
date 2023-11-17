#include<bits/stdc++.h>
using namespace std;
int main (){
    char n;
    cin>>n;
    int ans = int(n);
    if (ans>=48 && ans<=57)
    {
        cout<<"IS DIGIT";
    }else if(ans>=65 && ans<=90){
        cout<<"ALPHA"<< endl <<"IS CAPITAL";
    }else
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    
    
    return 0;
}