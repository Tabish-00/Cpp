#include <iostream>
#include <string>

using namespace std;

// Decleare Memory dynamically and assign values through input
int ** create2DArray(int rows, int cols){    
    int ** doublePointer = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        doublePointer[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter Value for row index " << i+1 << " and column index" << j+1;
            cin >> doublePointer[i][j];
        }
    }
    return doublePointer;
}

// Consume values through double pointers
void printArray(int ** arrayToPrint, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << *(*(arrayToPrint + i ) + j);
            cout << "\t";
        }
        cout << endl;
    }
}

void clear2DArray(int ** arrayToDelete, int rows){
    for (int i = 0; i < rows; i++)
    {
        delete [] arrayToDelete[i];
    }
    delete [] arrayToDelete;
}

int main() {

    int **doublePointer, rows=0, cols=0;

    cout << "Enter number of rows";
    cin >> rows;
    cout << "Enter number of colums";
    cin >> cols;

    doublePointer = create2DArray(rows, cols);
    printArray(doublePointer, rows, cols);
    clear2DArray(doublePointer, rows);

    return 0;
    
    

}