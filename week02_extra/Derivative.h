#pragma once
#include"Function.h"

// Derivative of a given function
class Derivative : public Function {
    public:
    Derivative(Function* fun): fun_(fun), dx_(0.01) {};
    ~Derivative();

    double operator()(double point)const; // Evaluate the function
    Derivative& operator=(Derivative& source);
    void set_dx(double);// set the precision of derivation


    private:
    Function* fun_; // Derivative of this function will be calculated.
    double dx_; // precision of derivation
};