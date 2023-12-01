#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v(26,0);
    string s;
    cin>>s;
    for(char val:s){
        v[val-'a']++;
    }
    for(char i='a';i<='z';i++){
        if (v[i-'a']!=0)
        {
            cout<<i<<" "<<":"<<" "<<v[i-'a']<<endl;
        }
        
    }
    
    
    return 0;
}