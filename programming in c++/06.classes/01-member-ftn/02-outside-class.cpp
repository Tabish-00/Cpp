#include <iostream>
using namespace std;

class MyClass{
public:
    void MyMember(){
        cout<<"Hi Member"<<endl;
    }

    void MyMember2();

    int MyMember2(int Maxspeed);
};

void MyClass::MyMember2(){
        cout<<"Hi Member 2"<<endl;
    };

int MyClass::MyMember2(int Maxspeed){
        return Maxspeed;
    };


int main(){
    MyClass obj;

    obj.MyMember();
    obj.MyMember2();
    cout<<"Max Speed "<<obj.MyMember2(200);
    return 0;
}