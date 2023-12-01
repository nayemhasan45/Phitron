#include<bits/stdc++.h>
using namespace std;
int main (){

    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long  presum[n];
    presum[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        presum[i]=arr[i]+presum[i-1];
    }
    
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum=0;
        if(l==0) sum=presum[r];
        else sum=presum[r]-presum[l-1];
        cout<<sum<<endl;
    }
    
    
    return 0;
}