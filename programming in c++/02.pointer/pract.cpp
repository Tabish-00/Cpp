#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 3x3 2D array
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Output the array elements
    cout << "The 3x3 array is:" << endl;
    for (int i = 0; i < 3; i++) {          // Loop through rows
        for (int j = 0; j < 3; j++) {      // Loop through columns
            cout << array[i][j] << " ";    // Print element
        }
        cout << endl;                      // Newline for next row
    }

    return 0;
}
