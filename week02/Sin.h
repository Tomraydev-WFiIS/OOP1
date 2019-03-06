#pragma once
#include"Function.h"

// Trigonometric sinus function
class Sin : public Function {
    public:
    Sin(double a): a_(a) {};

    double operator()(double val)const; // Evaluate the function

    private:
    double a_; // sin(a*x). a - coefficient
};