#include <iostream>
using namespace std;

int main(){

    int rows=0, cols=0;
    cout << "Enter number of rows : ";
    cin >> rows;


    cout << "Enter number of colums : ";
    cin >> cols;
    
    int** arr = new int*[rows];

    for (int i = 0; i < cols; i++)
    {
        arr[i] = new int[cols];
    }
    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           cout<<"Enter "<<i<<" index rows & "<<"Enter "<<j<<" index cols : ";
           cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < cols; i++)
    {
        delete[] arr[i];
    }
  
    delete[] arr;
        
    return 0;
}