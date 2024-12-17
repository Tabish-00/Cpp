#include <iostream>
using namespace std;

struct student
{
    int ID = 0;
    string name;
};

int main(){
    struct student s1;
    s1.name="ali";
    s1.ID=123456;

    cout<<"Name of student : "<<s1.name<<endl;
    cout<<"\nID of student : "<<s1.ID<<endl;

    return 0;
}