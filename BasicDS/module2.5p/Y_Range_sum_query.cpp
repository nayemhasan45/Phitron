#include<bits/stdc++.h>
using namespace std;
int main (){

    int n,q;
    cin>>n>>q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int l,r;
    while (q--)
    {
        cin>>l>>r;
        int sum=0;
        for (int i = l-1; i <= r-1; i++)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl; 
    }
    return 0;
}