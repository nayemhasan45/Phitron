#include<bits/stdc++.h>
using namespace std;
class Friends{
    public:
    char name[100];
    char country[100];
    int age;
    int room;
};
int main (){
    Friends hamza;
    Friends milad;
    cin>>hamza.name>>hamza.country>>hamza.age>>hamza.room;
    cin>>milad.name>>milad.country>>milad.age>>milad.room;
    cout<<hamza.name<<" "<<hamza.country<<" "<<hamza.age<<" "<<hamza.room<<endl;
    cout<<milad.name<<" "<<milad.country<<" "<<milad.age<<" "<<milad.room;
    cout<<milad.country;
    return 0;
}