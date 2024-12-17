#include <iostream>
using namespace std;

int main(){

    int rows=0, cols=0;
    cout << "Enter number of rows : ";
    cin >> rows;


    cout << "Enter number of colums : ";
    cin >> cols;
    
    int* arr = new int[rows * cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           cout<<"Enter "<<i<<" index rows & "<<"Enter "<<j<<" index cols : ";
           cin>>arr[i * cols + j];
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           cout<<arr[i * cols + j]<<" ";
        }
        cout<<endl;
    }
  
    delete[] arr;
        
    return 0;
}