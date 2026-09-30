#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    Array arr(5);

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << "Array size: " << arr.getSize() << endl;
    cout << "Array elements: ";

    for (int i = 0; i < arr.getSize(); i++)
        cout << arr[i] << " ";

    cout << endl;
}
