#include <iostream>
using namespace std;

class Hero {

    public:
        string name;
        int* ageptr;
    Hero (){
        cout<<"welcome to Parameterized contructor"<<endl;
    }
    Hero (string name,int age){
        this -> name = name;
        ageptr = new int;
        *ageptr = age;
    }

    Hero (Hero& temp){
        this -> name = temp.name;
        this ->ageptr = new int;
        *(this -> ageptr) = *(temp.ageptr);
    }

    void getinf0(){
        cout<<"name : "<<this -> name<<endl;
        cout<<"age : "<<*ageptr<<endl;
    }
};


int main(){

    Hero h1("ali",21);  // paramerized constructor called statically
    Hero h2(h1);  // copy constructor called statically
    
    h1.getinf0();
    cout<<&h1<<endl;
    *(h2.ageptr)= 22;
    h1.getinf0();
    cout<<&h1<<endl;


   
    return 0;
}