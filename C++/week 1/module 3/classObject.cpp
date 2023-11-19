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
    // char tem[100]="ali hamza";
    // strcpy(hamza.name,tem);
    // cout<<tem;
    cin.getline(hamza.name,100);
    cin>>hamza.country>>hamza.age>>hamza.room;

    getchar();
    cin.getline(milad.name,100);
    cin>>milad.country>>milad.age>>milad.room;

    cout<<hamza.name<<" "<<hamza.country<<" "<<hamza.age<<" "<<hamza.room<<endl;

    cout<<milad.name<<" "<<milad.country<<" "<<milad.age<<" "<<milad.room;

    // cout<<milad.country;

    return 0;
}