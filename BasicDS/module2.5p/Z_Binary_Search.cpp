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
    int m;
    // cin>>m;
    while (q--)
    {
        cin>>m;
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==m){
                flag=1;
                break;
            }else
            {
                flag=0;
            } 
        }
        if(flag){
            cout<<"found"<<endl;
        }else
        {
            cout<<"not found"<<endl;
        }
    }

    
    
    
    return 0;
}