#include <iostream>
using namespace std;

class Student{
public:
    int* rollnoptr;
    string name;
    Student(){

    }
    Student(int rollno,string name){
        rollnoptr = new int;
        *rollnoptr = rollno;   
        this -> name = name;
    };

    Student(Student& temp) {
        rollnoptr = new int;
        *rollnoptr = *temp.rollnoptr;    
        this -> name = temp.name;
        
    };
    ~Student(){
        delete rollnoptr;
    }
    void getinfo(){
        cout<< *rollnoptr<<endl;
        cout<< this -> name<<endl;
    }
};



int main(){
    Student s1(11,"Ali");
    s1.getinfo();
        cout<<endl;
    Student s2(s1);
    s2.getinfo();
    *(s2.rollnoptr)=33;
    s1.getinfo();
}