#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;
        Student(int roll,int cls,double gpa){
            this->roll=roll;
            this->cls=cls;
            this->gpa=gpa;
        }
};
Student* callStuden(){
    Student* hamza =  new Student(3,4,5.66);
    return hamza;
}
int main (){
    Student* ans = callStuden();
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;
    delete ans;
    // cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;
    return 0;
}