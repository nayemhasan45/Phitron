#include<bits/stdc++.h>
using namespace std;
class Studen{
    public:
        int roll;
        int cls;
        double cgpa;
    Studen(int roll,int cls,double cgpa){
        // (*this).roll=roll;
        // (*this).cls=cls;
        // (*this).cgpa=cgpa;

        //second method
        this->roll=roll;
        this->cls=cls;
        this->cgpa=cgpa;
    }
};
int main (){

    Studen hamza(23,9,5.25);
    Studen milad(22,9,1.55);
    cout<<hamza.roll<<" "<<hamza.cls<<" "<<hamza.cgpa<<endl;
    cout<<milad.roll<<" "<<milad.cls<<" "<<milad.cgpa<<endl;
    
    return 0;
}