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
    Friends mn;
    mn.age=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].age<=mn.age)
        {
            mn=arr[i];
        }
        // cout<<arr[i].name<<" "<<arr[i].age<<endl;
    }
    cout<<mn.name<<" "<<mn.age<<endl;
    

    return 0;
}