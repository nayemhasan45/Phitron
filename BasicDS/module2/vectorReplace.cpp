#include<bits/stdc++.h>
using namespace std;
int main (){

    vector<int> v={1,4,2,3,2,4,5,6,2,7};
    // replace(v.begin(),v.end(),2,5);
    // for(int x:v){
    //     cout<<x<<" ";
    // }
    // vector<int>::iterator it;
    auto it=find(v.begin(),v.end(),7);
    // cout<<*it;
    if(it==v.end())cout<<"not found";
    else cout<<"found";
    return 0;
}