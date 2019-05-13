#include "Array.h"

Array::Array(int size_) {
    size = size_;
    tab = new int[size];
}
Array::~Array() {
    delete[] tab;
}

int& Array::operator[](int i) {
    return tab[i];
}