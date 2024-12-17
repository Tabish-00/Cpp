#include <iostream>
#include <string>

using namespace std;

int main() {

    int **doublePointer, rows=0, cols=0;

    cout << "Enter number of rows";
    cin >> rows;


    cout << "Enter number of colums";
    cin >> cols;
    
    // Decleare Memory dynamically and assign values through input
    doublePointer = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        doublePointer[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter Value for row index " << i+1 << " and column index" << j+1;
            cin >> doublePointer[i][j];
        }
    }

    // Consume values through double pointers
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << *(*(doublePointer + i ) + j);
            cout << "\t";
        }
        cout << endl;
    }

    // delete memory

    for (int i = 0; i < rows; i++)
    {
        delete [] doublePointer[i];
    }

    delete [] doublePointer;

}