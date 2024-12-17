#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 3x3 matrix
    int array[3][3] = {
                        {1, 2, 3},
                            {4, 5, 6},
                                {7, 8, 9}
                                    };

    // Declare a pointer to a 2D array of size 3x3
    int (*ptr)[3] = array;  
    // Output the array elements using pointer
    cout << "The 3x3 matrix using pointer is:" << endl;
    for (int i = 0; i < 3; i++) {            
        for (int j = 0; j < 3; j++) { 
            cout << *(*(ptr+i) + j) << " ";
            // cout << (*(ptr+i) + j) << " ";       
            // cout << *(*(ptr+i) + j) << " ";    
                               
    }
    cout << endl; 
    }
        for(int i = 0; i < 3; i++)
    {
        cout<<"address of "<<i<<"th array\t\t"<<*(ptr + i)<<endl;
        for(int j = 0; j < 4; j++)
    {
        cout<<"arr["<<i<<"]["<<j<<"] = "<< *( *(ptr + i) + j)<<endl ;
    }
        cout<<"\n\n";
    }
    return 0;
}
