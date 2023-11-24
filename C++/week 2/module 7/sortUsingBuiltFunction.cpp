#include<bits/stdc++.h>
using namespace std;
class Friends{
    public:
    string name;
    int age;
};
bool len(Friends a,Friends b){
    if (a.age<b.age)
    {
        return true;
    }else
    {
        if(a.age==b.age){
            if (a.name.size()<b.name.size())
            {
                return true;
            }else
            {
                return false;
            }   
        }
        return false;
    }
    
    
}
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
    sort(arr,arr+n,len);
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].age<<endl;
    }
    
    return 0;
}