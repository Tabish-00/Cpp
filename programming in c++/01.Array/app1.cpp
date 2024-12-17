#include <iostream>
using namespace std;

int main(){

    // int n;

    // cout<<"Enter the size n = ";

    // cin>>n;
    // int m;

    // cout<<"Enter the size m = ";

    // cin>>m;

    // int myarr[n] = {};
    

    int myarr[2][4] = {1,2,3,4};

      // Initialize 2D array using loop 
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 4; j++) { 
            myarr[i][j]; 
            
        } 
    } 
  
    // Printing the element of 2D array 
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 4; j++) { 
            cout << myarr[i][j] << " "; 
        } 
        cout << endl; 
    } 
    

    return 0;
}