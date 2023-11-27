#include<bits/stdc++.h>
using namespace std;
long long int ans(int x,int n){
    long long int mult=0;
    for (int i = 2; i <= n; i+=2)
    {
        mult+=pow(x,i);
    }
    return mult;
}
int main (){
    int x,n;
    cin>>x>>n;
    cout<<ans(x,n);
    return 0;
}