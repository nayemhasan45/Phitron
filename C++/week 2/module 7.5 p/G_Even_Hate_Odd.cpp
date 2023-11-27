#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long int arr[n];
        if(n%2==0){
            for (int i = 0; i < n; i++)
                {
                    cin>>arr[i];
                }
                int even=0,odd=0;
                int ans=n/2;
                for(int i=0;i<n;i++){
                    if(arr[i]%2==0){
                        even++;
                    }else
                    {
                        odd++;
                    }
                    
                }
                if (ans==even)
                {
                    cout<<0<<endl;
                }else if(ans>even||ans<even){
                    cout<<abs(ans-even)<<endl;
                }
                
        }else
        {
            cout<<-1<<endl;
        } 
    }
    
    return 0;
}