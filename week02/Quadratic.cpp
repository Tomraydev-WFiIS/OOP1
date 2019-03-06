#include<iostream>
#include"Quadratic.h"

double Quadratic::operator()(double val)const{
    return a_*val*val + b_*val + c_;
}