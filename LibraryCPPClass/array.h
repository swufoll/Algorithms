#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef>

class Array
{
public:
    explicit Array(size_t size);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

    int get(size_t index) const;
    void set(size_t index, int value);
    size_t size() const;

private:
    int* data;
    size_t length;
};

#endif
