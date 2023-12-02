#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        auto it=find(v.begin()+(i+1),v.end(),v[i]);
        if(it!=v.end()){
            flag=true;
            break;
        }
    }
    if (flag)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    return 0;
}