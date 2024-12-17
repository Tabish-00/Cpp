#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    Student(int r, string n) {
        rollno = r;
        name = n;
    };
};



int main(){
    int n;
    Student s1(123,"ali");
    cout<<s1.name;
    // Student* s = new Student;
    // delete[] s;
    return 0;
}