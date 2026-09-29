#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* data;
    int size;

public:
    Array(int size) {
        this->size = size;
        data = new int[size];
    }

    ~Array() {
        delete[] data;
    }

    int getSize() const {
        return size;
    }

    int& operator[](int index) {
        return data[index];
    }

    const int& operator[](int index) const {
        return data[index];
    }
};

#endif
