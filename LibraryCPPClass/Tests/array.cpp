#include "array.h"

int main()
{
    Array arr(5);

    if (arr.size() != 5)
        return 1;

    for (int i = 0; i < 5; i++)
        arr.set(i, i * 2);

    for (int i = 0; i < 5; i++)
    {
        if (arr.get(i) != i * 2)
            return 1;
    }

    return 0;
}
