#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        // int arr2=strcpy(arr,n);
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            arr2[i]=arr[i];
        }
        sort(arr,arr+n);
        bool flag=false;
        // for(int i=0;i<n-1;i++){
        //     if(arr[i]<=arr[i+1]){
        //         flag=true;
        //     }
        //     else
        //     {
        //         flag=false;
        //         break;
        //     }
        // }
        if (equal(arr,arr+n,arr2)){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        // if(flag) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
    }
    
    return 0;
}