#include <iostream>
using namespace std;


struct Address {
    string street;
    string city;
    string state;
    string zipCode;

    Address(const string& st, const string& ci,const string& sta,const string& zip):
                street(st),city(ci),state(sta),zipCode(zip){}

    void print(){
        cout<<"street : "<<street<<endl;
        cout<<"city : "<<city<<endl;
        cout<<"state : "<<state<<endl;
        cout<<"zipcode : "<<zipCode<<endl;
    }

};

struct Person {
    string name;
    int age;
    double height;
    Address* address; 

    Person(const string& n, const int& a,const double& h,const string& st, const string& ci,const string& sta,const string& zip):
        name(n),age(a),height(h) {
            address = new Address(st,ci,sta,zip);
        }
    
    ~Person(){
        delete address;
    }
// Function to set all values
    void setAllValues(const string& n, const int& a,const double& h,const string& st, const string& ci,const string& sta,const string& zip){
        name = n,
        age = a,
        height = h,
        *address = Address(st,ci,sta,zip);
    }
    
    void printAllValues(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Height : "<<height<<endl;
        cout<<"Address : "<<endl;
        address->print();
        cout<<"------------------------"<<endl;
    }
};

int main() {
   const int numPeople = 3;
    Person people[numPeople] = {
        Person("Alice", 30, 5.5, "123 Maple St", "Springfield", "IL", "62701"),
        Person("Bob", 25, 6.0, "456 Oak St", "Centerville", "OH", "45459"),
        Person("Charlie", 35, 5.8, "789 Pine St", "Greenville", "SC", "29601")
    };

    // Print the details of each person
    for (int i = 0; i < numPeople; ++i) {
        people[i].printAllValues();
    }


    return 0;
}