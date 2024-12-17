#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter the size = ";

    cin>>n;

    // int myarr[n] = {};
    

    int myarr[n] ={0,1,2,3};

     for (int i = 0; i < n; i++)
    {
        cout<<i<<". "<<myarr[i]<<endl;
        cout<<myarr[i]<<" "<<endl;
    }
    

    return 0;
}