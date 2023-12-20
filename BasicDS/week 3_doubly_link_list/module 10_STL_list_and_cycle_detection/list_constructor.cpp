#include<bits/stdc++.h>
using namespace std;
int main (){
    // list<int>mylist;
    list<int>myList={1,2,3,4,5};
    list<int>mylist(myList);
    // cout<<mylist.front();
    for(auto it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl;
    }
    for(int val:mylist){
        cout<<val;
    }
    return 0;
}