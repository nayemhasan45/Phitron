#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int cnt=0;
    for(int val:v){
        if(find(v.begin(),v.end(),val+1)!=v.end()){
            cnt++;
        }
    }
    cout<<cnt;
    
    return 0;
}