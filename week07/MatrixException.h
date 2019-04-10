#pragma once
#include <iostream>
#include <string>
// #include <exception>

class MatrixException {
public:
    MatrixException(std::string str);
    std::string what()const;

private:
    std::string text;
};