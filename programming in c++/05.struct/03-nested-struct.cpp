#include <iostream>
using namespace std;

struct Address
{
    int House_no;
    string city;
};

struct student
{
    int ID = 0;
    string name;
    Address address;
};

int main(){
    // int n;
    // cout << "Enter the number of students: ";
    // cin >> n;

    const int n = 3;

    student s1[n];
    
    s1[0].name="ali";
    s1[0].ID=123456;
    s1[0].address.city = "FSD";
    s1[0].address.House_no = 12;

    s1[1].name="Umer";
    s1[1].ID=999999;
    s1[1].address.city = "LHR";
    s1[1].address.House_no = 123;

    s1[2].name="ali";
    s1[2].ID=67655;
    s1[2].address.city = "KHR";
    s1[2].address.House_no = 132;

    for (int i = 0; i < n; i++)
    {
        cout<<"\nStudent "<<i+1<<":"<<endl;
        cout<<"\tName of student "<<" : "<<s1[i].name<<endl;
        cout<<"\tID of student "<<" : "<<s1[i].ID<<endl;
        cout<<"\tStudent "<<" House no : "<<s1[i].address.House_no<<" & City "<<" : "<<s1[i].address.city<<endl;
    }
    

    return 0;
}