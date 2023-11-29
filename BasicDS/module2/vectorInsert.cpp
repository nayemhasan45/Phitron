#include<bits/stdc++.h>
using namespace std;
int main (){

    vector<int> v={1,2,3,4,5};
    // vector<string> name={"nayem"};
    vector<int> name={11,12,13,14,15};
    // v.insert(v.begin()+2,name.begin(),name.end());
    v.erase(v.begin()+1,v.end()-2);
    for(int d:v){
        cout<<d<<" ";
    }
    return 0;
}