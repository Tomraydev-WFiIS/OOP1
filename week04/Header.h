#pragma once
#include <iostream>
#include "Element.h"

class Header : public Element {
    public:
        Header() =default;
        Header(const std::string &str, int size);

        int get_size()const; // return the size
    private:
        int size_; // Importance 1 - max, 6 - min
};