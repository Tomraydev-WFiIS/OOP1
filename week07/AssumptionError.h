#pragma once
#include <iostream>
#include <string>
// #include <exception>

class AssumptionError{
public:
    AssumptionError(std::string str);
    std::string what()const;

private:
    std::string text;
};