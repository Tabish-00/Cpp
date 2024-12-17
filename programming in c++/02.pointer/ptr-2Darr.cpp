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
    int (*ptr)[3] = array;  // Pointer to array of 3 integers

    // Output the array elements using pointer
    cout << "The 3x3 matrix using pointer is:" << endl;
    for (int i = 0; i < 3; i++) {            // Loop through rows
        for (int j = 0; j < 3; j++) {        // Loop through columns
            cout << *(ptr[i] + j) << " ";    // Dereference pointer to access element
        }
        cout << endl;                        // Newline for next row
    }

    return 0;
}
