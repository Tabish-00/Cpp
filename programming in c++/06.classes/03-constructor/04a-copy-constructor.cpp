#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    Student(int r,string n):rollno(r),name(n) {};

    Student(Student& temp) {
        // this -> rollno = temp.rollno;   // optional
        // this -> name = temp.name;
        rollno = temp.rollno;
        name = temp.name;
    };
    void getinfo(){
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};



int main(){
    int n;
    Student s1(123,"ali");
    Student s2(s1);
    s1.getinfo();
    s2.getinfo();
}