#include <iostream>
using namespace std;
class A {
public:
	A ( )
	  { cout<< "A default"<<endl; }
	A (int a)
	  { cout<<"A parametrized"<<endl; }
    ~A (){ 
        cout<<"A Destruct"<<endl; 
    }
};
class B : public A 
{
  public: 
	B ( ) { 
   cout<<"B default"<<endl; }
   ~B ( ) { 
   cout<<"B Destructor"<<endl; }
};


int main(){

    B obj;
    return 0;
}