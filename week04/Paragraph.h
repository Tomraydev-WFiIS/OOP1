#pragma once
#include <iostream>
#include "Element.h"

class Paragraph : public Element {
    public:
        Paragraph() = default;
        Paragraph(const std::string &str);
};