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

    double positiveSum = 0;
    double negativeSum = 0;

    int positiveCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveSum += arr[i];
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeSum += arr[i];
            negativeCount++;
        }
    }

    if (positiveCount > 0) {
        cout << "Average positive: " << positiveSum / positiveCount << endl;
    } else {
        cout << "Average positive: N/A" << endl;
    }

    if (negativeCount > 0) {
        cout << "Average negative: " << negativeSum / negativeCount << endl;
    } else {
        cout << "Average negative: N/A" << endl;
    }

}
