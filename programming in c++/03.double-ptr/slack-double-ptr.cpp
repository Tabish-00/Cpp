#include <iostream>
#include <string>

using namespace std;

int main() {

    int **doublePointer;
    int *singlePointer;
    int variable = 10;

    doublePointer = &singlePointer;
    singlePointer = &variable;

    cout << "1.1 " << doublePointer << endl;
    cout << "1.2 " << &singlePointer << endl;

    cout << "2.1 " << *doublePointer << endl;
    cout << "2.2 " << singlePointer << endl;
    cout << "2.3 " << &variable << endl;

    cout << "3.1 " << **doublePointer << endl;
    cout << "3.2 " << *singlePointer << endl;
    cout << "3.3 " << variable << endl;

    variable = 16;

    cout << "4.1 " << **doublePointer << endl;
    cout << "4.2 " << *singlePointer << endl;
    cout << "4.3 " << variable << endl;


    *singlePointer = 5;

    cout << "5.1 " << **doublePointer << endl;
    cout << "5.2 " << *singlePointer << endl;
    cout << "5.3 " << variable << endl;


    **doublePointer = 10;

    cout << "6.1 " << **doublePointer << endl;
    cout << "6.2 " << *singlePointer << endl;
    cout << "6.3 " << variable << endl;

    return 0;
}