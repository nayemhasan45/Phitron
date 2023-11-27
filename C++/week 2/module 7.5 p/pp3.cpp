#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    string s2;
    cin>>s2;
    stringstream ss(s);
    string word;
    int cnt=0;
    while (ss>>word)
    {
        // cout<<word<<endl;
        if (word==s2)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}