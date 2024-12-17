#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    Student(int r,string n):rollno(r),name(n) {};
};



int main(){

    const int n = 3;

    Student s[n] = {
        Student(123, "John"),
        Student(3, "Ali"),
        Student(456, "Sarah")
    };

    for (int i = 0; i < n; i++)
    {
        cout<<"Student "<<i+1<<":"<<"\n\tRoll no : " << s[i].rollno<<" & Name : "<<s[i].name<<endl;
    }
    
    return 0;
}