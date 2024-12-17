#include <iostream>
using namespace std;

int main(){
/*
int *pointer1, *pointer2;
int num1 = 93;
pointer1 = &num1; //address of num1
pointer2 = pointer1; // pointer1 address
// is assigned to pointer2
cout<<"Address stored in pointer1"<<pointer1<<endl;;
cout<<"Address stored in pointer2"<<pointer2;
*/

int *pointer1, *pointer2;
int num1 = 93;
// if ( pointer1 == NULL ) // pointer compared to NULL
    pointer1 = &num1;
    pointer2 = &num1;
if ( pointer1 == pointer2 ) // pointer compared to pointer
    printf("Both pointers are equal");

    return 0;
}