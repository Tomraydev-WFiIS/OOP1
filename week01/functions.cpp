#include<iostream>
#include <cmath>
#include "Operation.h"
#include "Division.h"
#include "Exponentiation.h"
#include "SumOfElements.h"

using namespace std;

Division::Division(int x, int y){
    x_ = x;
    y_ = y;
}

void Division::print()const{
    cout << x_ << " / " << y_;
    return;
}

double Division::eval()const {
    return (double) (x_/y_);
}

Exponentiation::Exponentiation(double x, double y){
    x_ = x;
    y_ = y;
}

void Exponentiation::print()const{
    cout << x_ << " ^ " << y_;
    return;
}

double Exponentiation::eval()const{
    return pow(x_,y_);
}


SumOfElements::SumOfElements(double *tab, int size){
    A_ = tab;
    size_ = size;
}

void SumOfElements::print()const{
    int i;
    for(i = 0; i < size_ - 1; i++){
        cout << A_[i] << " + ";
    }
    cout << A_[i];
}

double SumOfElements::eval()const {
    double sum = 0;
    for(int i = 0; i < size_; i++){
        sum += A_[i];
    }
    return sum;
}

void operator>>=(const char *text, const Operation& op){
    cout << text << " ";
    op.print();
    cout << " " << text << endl;
    return; 
}