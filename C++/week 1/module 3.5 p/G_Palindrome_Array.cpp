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
    int flag = 1;
    int j=n-1;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]!=arr[j])
        {
            flag=0;
        }
        j--;
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}