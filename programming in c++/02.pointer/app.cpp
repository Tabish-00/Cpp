#include <iostream>
using namespace std;

int main(){

    int x = 10;
    // int* myptr;
    // myptr = &x;
    int* myptr = &x;

    cout<<"Value of x = "<<x<<endl;

    cout<<"address of x : "<<&x<<endl;

    cout<<"address of myptr : "<<&myptr<<endl;

    *myptr = 20;

    cout<<"Value of x = "<<x<<endl;

    cout<<"value store in myptr OR derefering : "<<*myptr<<endl;

     cout<<"address of value store in myptr : "<<myptr<<endl;

    return 0;
}