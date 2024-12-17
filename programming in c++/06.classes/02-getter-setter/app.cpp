#include <iostream>
using namespace std;

class Teacher{
    private:
        int salary;
    
    public:
        void setsalary(int s){
            salary = s;
        }

        int getsalary(){
            return salary;
        }
        void MyMember(){
            cout<<"Getter Setter"<<endl;
        }
};


int main(){
    Teacher t1;

    t1.setsalary (450000);

    t1.MyMember();
    
    cout << t1.getsalary() <<endl;
    return 0;
}