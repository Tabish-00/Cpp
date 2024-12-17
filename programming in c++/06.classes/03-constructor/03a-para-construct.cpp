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

    void getinfo(){
        cout<<this ->name<<endl;
        cout<<this ->rollno<<endl;
    }
};



int main(){
    int n;
    Student s1(123,"ali");
    s1.getinfo();
   
}