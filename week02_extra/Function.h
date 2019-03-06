#pragma once

// Abstract class for mathematical functions
class Function {
    public:
    virtual ~Function() = default;

    virtual double operator()(double)const = 0; // Evaluate the function

};