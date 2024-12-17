#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int* ptr = &x;
    int** ptr2 = &ptr;

    cout<<"x : "<<x<<endl;
    cout<<"\nAddress of X : "<<&x<<endl;
    cout<<"Value store in ptr : "<<ptr<<endl;

    cout<<"\nAddress of ptr : "<<&ptr<<endl;
    cout<<"Value store in ptr2 : "<<ptr2<<endl;

    cout<<"\nDerefrence of ptr : "<<*ptr<<endl;
    cout<<"Derefence in ptr2 : "<<**ptr2<<endl;
    return 0;
}