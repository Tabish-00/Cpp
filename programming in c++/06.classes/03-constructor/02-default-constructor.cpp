#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    Student() {
        cout<<"Level";
    };
};



int main(){
    int n;
    Student s1;

    Student* s = new Student;
    delete[] s;
    return 0;
}