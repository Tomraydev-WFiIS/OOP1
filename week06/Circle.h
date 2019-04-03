#pragma once
#include <iostream>
#include "Shape.h"

class Circle : public Shape {
public:
    Circle() = default;
    Circle(double r): r_(r) {};
    
    void draw()const; //Draw the circle to standard output
    void scale(double factor); // Scale the shape by a factor
private:
    double r_; // Circle radius
};

void Circle::draw()const{
    std::cout << "Circle with radius " << r_ << std::endl;
    return;
}

void Circle::scale(double factor){
    r_ *= factor;
    return;
}