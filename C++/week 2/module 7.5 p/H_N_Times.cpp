#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        char c;
        cin>>n>>c;
        string ar;
        ar.resize(n,c);
        for (int i = 0; i < n; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}