#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        char section[100];
        int mathMarks;
        int cls;
    Student(int roll,int mathMarks,int cls)
            {
                // *this->name=name;
                this->roll=roll;
                // *this->section=section;
                this->mathMarks=mathMarks;
                this->cls=cls;
            }
};
int main (){
    // char tem[100]="ali hamza";
    Student karim (22,70,11);
    Student rahim(12,99,12);
    Student nahid(12,98,12);
    // char name = strcopy()
    if(karim.mathMarks>=rahim.mathMarks&&karim.mathMarks>=nahid.mathMarks){
        cout<<karim.mathMarks;
    }else if(rahim.mathMarks>=nahid.mathMarks){
        cout<<rahim.mathMarks;
    }else{
        cout<<nahid.mathMarks;
    }
    return 0;
}
// Student
// {
// 	name;
// 	roll;
// 	section;
// 	math_marks;
// 	cls;
// }
// Then compare those 3 objects and print who
//  got the highest math_marks and print his/her
//  name.
