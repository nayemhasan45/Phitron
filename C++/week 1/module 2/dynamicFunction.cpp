#include<bits/stdc++.h>
using namespace std;
int* fun(int n){
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"from fun"<<a;
    return a;
    
}
int main (){
    int *ans = fun(5);
    for (int i = 0; i < 5; i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
    cout<<ans;
    
    return 0;
}