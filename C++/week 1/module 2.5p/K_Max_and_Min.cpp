#include<bits/stdc++.h>
using namespace std;
int main (){
    int x,y,z;
    cin>>x>>y>>z;
    pair<int,int> maxMin = minmax({x,y,z});
    cout<<maxMin.first<<" "<<maxMin.second;
    return 0;
}