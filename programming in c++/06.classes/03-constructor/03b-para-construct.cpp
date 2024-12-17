#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    Student(int r,string n):rollno(r),name(n) {
        // this -> rollno = rollno;
        // this -> name = name;
    };

    void getinfo(){
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};



int main(){
    int n;
    Student s1(123,"ali");
    s1.getinfo();
   
}