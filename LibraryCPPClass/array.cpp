#include "array.h"

Array::Array(size_t size)
{
    length = size;
    data = new int[size];
}

Array::Array(const Array& other)
{
    length = other.length;
    data = new int[length];

    for (size_t i = 0; i < length; i++)
        data[i] = other.data[i];
}

Array& Array::operator=(const Array& other)
{
    if (this == &other)
        return *this;

    int* newData = new int[other.length];

    for (size_t i = 0; i < other.length; i++)
        newData[i] = other.data[i];

    delete[] data;

    data = newData;
    length = other.length;

    return *this;
}

Array::~Array()
{
    delete[] data;
}

int Array::get(size_t index) const
{
    return data[index];
}

void Array::set(size_t index, int value)
{
    data[index] = value;
}

size_t Array::size() const
{
    return length;
}
