#pragma once
#include <iostream>
#include <string>
// #include <exception>

class IllegalOperation{
public:
    IllegalOperation(std::string str);
    std::string what()const;

private:
    std::string text;
};