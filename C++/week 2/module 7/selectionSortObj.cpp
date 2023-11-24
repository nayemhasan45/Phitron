#include<bits/stdc++.h>
using namespace std;
class Friends{
    public:
    string name;
    int age;
};
int main (){
    int n;
    cin>>n;
    Friends* arr=new Friends [n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        getline(cin,arr[i].name);
        cin>>arr[i].age;
    }
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[i].age>arr[j].age){
                swap(arr[i],arr[j]);
            }
            if(arr[i].age==arr[j].age){
                if (arr[i].name.size()>arr[j].name.size())
                {
                    swap(arr[i],arr[j]);
                }
                
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].age<<endl;
        // cout<<arr[i].name.size()<<endl;
    }
    
    return 0;
}