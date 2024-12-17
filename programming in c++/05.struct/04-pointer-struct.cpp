#include <iostream>
using namespace std;

struct student
{
    int* ID;
    string* name;
};

int main(){
    int n = 3;
    student s1;
   
    s1.ID = new int;
    s1.name = new string;

    // Dereference
    *(s1.ID)= 1234;
    *(s1.name) = "ali";
    

    cout<<"ID "<<*(s1.ID)<<endl;
    cout<<"Name "<<*(s1.name)<<endl;

    

    return 0;
}