#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int l,r;
    l=0;
    r=n-1;
    bool flag=false;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if(x==arr[mid]){
            flag=true;
            break;
        }
        if(x>arr[mid]){
            //dane jaw
            l=mid+1;
        }else{
            // bame jaw
            r=mid-1;
        }
    }
    if (flag)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    
    
    return 0;
}