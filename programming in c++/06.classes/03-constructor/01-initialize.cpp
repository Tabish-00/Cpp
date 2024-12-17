#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    Student(int r,string n):rollno(r),name(n) {};
};



int main(){

    Student s1(123,"john");
    Student s2(003,"Ali");
    Student s3(013,"Umer");

    cout<<"\nRoll no : "<<s1.rollno<<" & Name : "<<s1.name<<endl;
    cout<<"\nRoll no : "<<s2.rollno<<" & Name : "<<s2.name<<endl;
    cout<<"\nRoll no : "<<s3.rollno<<" & Name : "<<s3.name<<endl;

    return 0;
}