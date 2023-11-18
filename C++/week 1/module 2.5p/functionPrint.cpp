#include<bits/stdc++.h>
using namespace std;
int* printArray(int n){
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    return arr;
}
int main(){

    int n;
    cin>>n;
    int *ans =printArray(n);
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i];
    }
    
    
    return 0;
}