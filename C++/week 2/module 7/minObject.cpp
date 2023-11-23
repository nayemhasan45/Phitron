#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int age;
    int marks;
};
int main (){
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        getline(cin,a[i].name);
        cin>>a[i].age>>a[i].marks;
    }
    Student mn;
    mn.age=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(a[i].age<=mn.age){
            mn=a[i];
        }
        // cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].marks<<endl;
    }
    cout<<mn.name<<" "<<mn.age<<" "<<mn.marks<<endl;
    return 0;
}