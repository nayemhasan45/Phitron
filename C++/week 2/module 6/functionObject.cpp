#include<bits/stdc++.h>
using namespace std;
class Friend{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
    Friend(string nm,int ag,int m1,int m2){
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }
    int totalMarks(){
        return marks1+marks2;
    }
};
int main (){
    Friend hamza("ali hamza",26,96,99);
    // cout<<hamza.name;
    cout<<hamza.totalMarks();
    return 0;
}