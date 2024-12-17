#include<iostream>
using namespace std;

int main() {

   
    int my_arr[5] = {0,1,2,3,4}; // an array of 5 integers
        int *p; // pointer to int
        p = my_arr;
    cout<<"Address of p : "<< p<<endl;
    cout<<"Address of my_arr : "<< my_arr<<endl;
    cout<<"value of 0 index : "<<*(p)<<endl;

     int (*parr)[5]; // pointer to an array of 5 integers
    parr = &my_arr;
    cout<<"\nAddress of parr : "<< parr <<endl;
    cout<<"Address store parr "<< *parr <<endl;
    // cout<<"Address store parr "<< *(*parr+1) <<endl;
    p++;
    parr++;
    cout<<"\nAfter incrementing p by 1 : "<<p<<endl;
    cout<<"After incrementing parr by 1 : "<<parr<<endl;
    cout<<"\nAddress of p :"<< p<<endl;
    cout<<"Address of parr "<<parr<<endl;
    cout<<"\nvalue of p :"<<*p<<endl;
    cout<<"value of parr "<<*(*parr)<<endl;

return 0; }
