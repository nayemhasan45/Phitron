#include<bits/stdc++.h>
using namespace std;
class Friends{
    public:
    string name;
    int roll;
};
int main (){
    int n;
    cin>>n;
    Friends arr[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        cin>>arr[i].name;
        cin>>arr[i].roll;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<endl;
    }
    
     return 0;
}