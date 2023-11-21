#include<bits/stdc++.h>
using namespace std;
int main (){

    string s;
    s="hello world";
    // s="hello";
    // cout<<s.max_size()<<"\n"; //for max size of an stirng
    cout<<s<<endl;
    cout<<s.size()<<"\n";
    string s2;
    cout<<s2.capacity()<<endl;
    s.clear();
    if (s.empty())
    {
        cout<<"empty"<<endl;
    }else{
        cout<<"not empty"<<endl;
    }
    s.resize(5);
    s.resize(11,'n');
    cout<<s<<endl;
    return 0;
}