#include <iostream>
#include <fstream>
#include "array.h"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 1;

    ifstream file(argv[1]);

    int n;
    file >> n;

    Array arr(n);

    for (int i = 0; i < n; i++)
    {
        int value;
        file >> value;
        arr.set(i, value);
    }

    for (int i = 0; i < n;)
    {
        int value = arr.get(i);
        int count = 1;

        while (i + count < n && arr.get(i + count) == value)
            count++;

        cout << value << " " << count << endl;

        i += count;
    }
}
