#pragma once
#include<iostream>
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle() = default;
    Rectangle(double a): a_(a), b_(a) {};
    Rectangle(double a,double b): a_(a), b_(b) {}; 

    void draw()const; // Draw the rectangle to standard output
    void scale(double factor); // Scale the shape by a factor
    void operator*=(double factor); // Scale the shape by a factor

private:
    double a_; //side length
    double b_; //side length
};

void Rectangle::draw()const{
    std::cout << "Rectangle with sides " << a_ << ", " << b_ << std::endl;
    return;
}

void Rectangle::scale(double factor){
    a_ *= factor;
    b_ *= factor;
    return;
}

void Rectangle::operator*=(double factor){
    scale(factor);
    return;
}