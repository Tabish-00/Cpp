#include <iostream>
using namespace std;

int main(){

    int arr[10] = {0,11,12,13,14,15,16,17,18,19};
    int* arrptr = arr;

    // cout<<*arrptr<<endl;
    cout<<&arr<<endl;
    cout<<&arrptr<<endl;
    cout<<arrptr<<endl;

    cout<<"-----------------------------------"<<endl;

    cout<<"Address of 0 index of array : "<<(arrptr)<<endl;
    cout<<"Address of 1 index of array : "<<(arrptr+1)<<endl;
    cout<<"Address of 2 index of array : "<<(arrptr+2)<<endl;
    cout<<"Address of 3 index of array : "<<(arrptr+3)<<endl;
    cout<<"Address of 4 index of array : "<<(arrptr+4)<<endl;
    cout<<"Address of 5 index of array : "<<(arrptr+5)<<endl;
    cout<<"Address of 6 index of array : "<<(arrptr+6)<<endl;
    cout<<"Address of 7 index of array : "<<(arrptr+7)<<endl;
    cout<<"Address of 8 index of array : "<<(arrptr+8)<<endl;
    cout<<"Address of 9 index of array : "<<(arrptr+9)<<endl;

    cout<<"-----------------------------------"<<endl;

    cout<<"0 index of array *(arrptr) : "<<*(arrptr)<<endl;
    cout<<"1 index of array *(arrptr+1) : "<<*(arrptr+1)<<endl;
    cout<<"2 index of array *(arrptr+2) : "<<*(arrptr+2)<<endl;
    cout<<"3 index of array *(arrptr+3) : "<<*(arrptr+3)<<endl;
    cout<<"4 index of array *(arrptr+4) : "<<*(arrptr+4)<<endl;
    cout<<"5 index of array *(arrptr+5) : "<<*(arrptr+5)<<endl;
    cout<<"6 index of array *(arrptr+6) : "<<*(arrptr+6)<<endl;
    cout<<"7 index of array *(arrptr+7) : "<<*(arrptr+7)<<endl;
    cout<<"8 index of array *(arrptr+8) : "<<*(arrptr+8)<<endl;
    cout<<"9 index of array *(arrptr+9) : "<<*(arrptr+9)<<endl;
    
    cout<<"-----------------------------------"<<endl;
    // arrptr = arrptr+1;
    *(arrptr + 1) = 88;
    cout<<"0 index of array *(arrptr) : "<<*(arrptr)<<endl;
    cout<<"1 index of array *(arrptr+1) : "<<*(arrptr + 1)<<endl;
    cout<<"2 index of array *(arrptr+2) : "<<*(arrptr + 2)<<endl;
    cout<<"3 index of array *(arrptr+3) : "<<*(arrptr+3)<<endl;
    cout<<"4 index of array *(arrptr+4) : "<<*(arrptr+4)<<endl;
    cout<<"5 index of array *(arrptr+5) : "<<*(arrptr+5)<<endl;
    cout<<"6 index of array *(arrptr+6) : "<<*(arrptr+6)<<endl;
    cout<<"7 index of array *(arrptr+7) : "<<*(arrptr+7)<<endl;
    cout<<"8 index of array *(arrptr+8) : "<<*(arrptr+8)<<endl;
    cout<<"9 index of array *(arrptr+9) : "<<*(arrptr+9)<<endl;



    return 0;
}