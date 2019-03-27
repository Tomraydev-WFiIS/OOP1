#pragma once
#include <iostream>
#include "Element.h"

class PlainText : public Element {
    public:
        PlainText() = default;
        PlainText(const std::string &str);

    private:
        
};