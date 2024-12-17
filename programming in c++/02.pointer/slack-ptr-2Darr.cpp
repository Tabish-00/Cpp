#include <iostream>
#include <string>

using namespace std;

int main() {

    int array[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int *singlePtr = &array[0][0];
    int (*arraySizePtr)[5] = array;


    cout << "1. " << singlePtr << endl;
    cout << "2. " << arraySizePtr << endl;
    cout << "3. " << *arraySizePtr << endl;

    cout << "4. " << *singlePtr << endl;
    cout << "5. " << (*arraySizePtr)[0] << endl;
    cout << "6. " << **arraySizePtr << endl;


    cout << "7. " << singlePtr + 1 << endl;
    cout << "8. " << *arraySizePtr + 1 << endl;


    cout << "9. " << singlePtr + 5 << endl;
    cout << "10. " << (arraySizePtr + 1) << endl;
    cout << "11. " << *(arraySizePtr + 1) << endl;


    cout << "12. " << *(singlePtr + 1) << endl;
    cout << "13. " << (*arraySizePtr)[1] << endl;
    cout << "14. " << *(*arraySizePtr + 1) << endl;

    return 0;
}