#include <iostream>
using namespace std;
void myarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    // int* p = new int;
    // *p =10;

    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;

    // delete p;
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int* arr = new int[n];
   for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Assign values starting from 1
    }
    myarr(arr,n);
    
    delete []arr;
    return 0;
}