#include <iostream>
#include <fstream>
#include "Array.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Input file is not specified" << endl;
        return 1;
    }

    ifstream file(argv[1]);

    if (!file.is_open()) {
        cout << "Cannot open input file" << endl;
        return 1;
    }

    int n;
    file >> n;

    Array arr(n);

    for (int i = 0; i < n; i++) {
        file >> arr[i];
    }

    for (int i = 0; i < n; ) {
        int value = arr[i];
        int count = 1;

        while (i + count < n && arr[i + count] == value) {
            count++;
        }

        cout << value << " " << count << endl;

        i += count;
    }

}
