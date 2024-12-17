#include <iostream>
using namespace std;

class Teacher{
    private:
        int salary;
    
    public:
        void setsalary(int s = 0) {
            salary = s;
        }

        int getsalary() const {
            return salary;
        }
        void MyMember() {
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