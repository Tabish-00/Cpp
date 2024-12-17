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
        cout<<rollno<<endl;
        cout<<name<<endl;
    }
};



int main(){
    Student s1(11,"Ali");
    cout<<&s1<<endl;
    s1.getinfo();
        cout<<endl;
    Student s2(s1);
    cout<<&s1<<endl;
    s2.getinfo();
    cout<<endl;
    s2.name="Umer";
    s2.getinfo();
        cout<<endl;
    s1.getinfo();
}