#pragma once
#include"Function.h"

// Quadratic function. a*x^2 + b*x + c
class Quadratic : public Function {
    public:
    Quadratic(double a, double b, double c): a_(a), b_(b), c_(c) {};

    double operator()(double val)const; // Evaluate the function

    private:
    // Polynomial coefficients
    double a_;
    double b_;
    double c_;
};