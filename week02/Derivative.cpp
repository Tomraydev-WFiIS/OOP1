#include<iostream>
#include"Derivative.h"

double Derivative::operator()(double point)const{
    double deriv = ((*fun_)(point + dx_) - (*fun_)(point - dx_) ) / (2*dx_);
    return deriv;
}

void Derivative::set_dx(double dx){
    dx_ = dx;
}

Derivative::~Derivative(){
    delete fun_;
}