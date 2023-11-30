#include<bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin>>n;
    getchar();
    vector<string>v;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin,s);
        // cin>>s;
        v.push_back(s);
    }
    for(string ss:v){
        cout<<ss<<endl;
    }
    
    return 0;
}