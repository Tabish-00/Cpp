#include <iostream>
using namespace std;

int main(){

    int arr[10] = {0,11,12,13,14,15,16,17,18,19};
    int* arrptr = arr;

    for (int i = 0; i < 10; i++)
    {
        cout<< i <<" index of : "<<*(arrptr+i)<<endl;
    }
    cout<<"-----------------------------------"<<endl;
    *(arrptr + 1)= 88;
    for (int i = 0; i < 10; i++)
    {
        cout<< i <<" index of : "<<*(arrptr+i)<<endl;
    }
    



    return 0;
}