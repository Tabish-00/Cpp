#include <iostream>
using namespace std;

class MyClass{
public:
    void MyMember(){
        cout<<"Hi Member"<<endl;
    }
};


int main(){
    MyClass obj;

    obj.MyMember();
    
    return 0;
}