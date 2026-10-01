#include <iostream>
#include "array.h"

using namespace std;

int main()
{
    Array arr(5);

    for (size_t i = 0; i < arr.size(); i++)
        arr.set(i, (i + 1) * 10);

    cout << "Array size: " << arr.size() << endl;
    cout << "Array elements: ";

    for (size_t i = 0; i < arr.size(); i++)
        cout << arr.get(i) << " ";

    cout << endl;
}
