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

    double positiveSum = 0;
    double negativeSum = 0;
    int positiveCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < n; i++)
    {
        int value = arr.get(i);

        if (value > 0)
        {
            positiveSum += value;
            positiveCount++;
        }
        else if (value < 0)
        {
            negativeSum += value;
            negativeCount++;
        }
    }

    cout << "Average positive: ";
    if (positiveCount > 0)
        cout << positiveSum / positiveCount;
    else
        cout << "N/A";

    cout << endl;

    cout << "Average negative: ";
    if (negativeCount > 0)
        cout << negativeSum / negativeCount;
    else
        cout << "N/A";

    cout << endl;
}
