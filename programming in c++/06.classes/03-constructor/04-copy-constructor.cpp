#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    Student(int rollno, string name) {
        this -> rollno = rollno;
        this -> name = name;
    };
    Student(Student& temp) {
        this -> rollno = temp.rollno;
        this -> name = temp.name;
    };
    void getinfo(){
        cout<<this ->name<<endl;
        cout<<this ->rollno<<endl;
    }
};



int main(){
    int n;
    Student s1(123,"ali");
    Student s2(s1);
    s1.getinfo();
    s2.getinfo();
   
}