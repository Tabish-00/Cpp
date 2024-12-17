#include <iostream>
using namespace std;

struct student
{
    int ID = 0;
    string name;
    float marks[5];
};

int main(){
    const int n = 3;
    student s1[n];
    s1[0].name="ali";
    s1[0].ID=123456;

    s1[1].name="Umer";
    s1[1].ID=999999;

    s1[2].name="ali";
    s1[2].ID=67655;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter marks of Student "<<i+1 <<" : ";
            for (int j = 0; j < 5; j++)
            {
                cin >> s1[j].marks[j];
            }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"\nStudent "<<i+1<<":"<<endl;
        cout<<"\tName of student "<<i<<" : "<<s1[i].name<<endl;
        cout<<"\tID of student "<<i<<" : "<<s1[i].ID<<endl;
         cout<<"Marks of 5 Subject ";
        for (int i = 0; i < 5; i++)
        {
            cout << s1[i].marks[i] << " ";
        }
    }

   
    return 0;
}