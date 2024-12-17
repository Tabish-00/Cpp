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
    

    int myarr[2][4][4] = {{{1,2,3,4},
                            {1,2,3,4},
                                {1,2,3,4},
                                    {1,2,3,4}},
                            {{1,2,3,4},
                                {1,2,3,4},
                                        {1,2,3,4},
                                            {1,2,3,4}}};

      // Initialize 3D array using loop 
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 4; j++) { 
            for (int k = 0; k < 4; k++)
            {
                myarr[i][j][k];
            }   
        } 
    } 
  
    // Printing the element of 3D array 
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 4; j++) { 
            for (int k = 0; k < 4; k++)
            {
                cout<<myarr[i][j][k]<<" "; 
            }   
            cout << endl; 
        } 
        cout << endl; 
    } 
    

    return 0;
}