#include <iostream>
using namespace std;

class MyClass{
private:
    void MyMember(){
        cout<<"Hi Member"<<endl;
    }
    
    int MyMember2(int Maxspeed){
       return Maxspeed;
    };
public:
    int Maxspeed;
    void MyMember1(){
        MyMember();
    }
    void MyMember3(){
       cout << "Maxspeed: " << MyMember2(Maxspeed) << endl;
    }
};


int main(){
    MyClass obj;

    obj.MyMember1();
    obj.Maxspeed = 200;
    obj.MyMember3();
    
    return 0;
}