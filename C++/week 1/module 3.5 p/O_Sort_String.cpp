#include<bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin>>n;
    char s[n];
    cin>>s;
    sort(s,s+strlen(s));
    cout<<s;
    return 0;
}