#pragma once
#include<iostream>
#include "Drawable.h"
#include "Transformable.h"
#include "Shape.h"
#include "math.h"

// Zawiera dlugosci bokow; a, b, c
class Triangle : public Shape {
public:
    Triangle(double aa, double bb, double cc): a(aa), b(bb), c(cc){};
    void draw()const override;
    double area()const override;
    void shift(double x, double y) override;
private:
    double a;
    double b;
    double c;
};


void Triangle::draw()const{
    std::cout << "Rysuje Trojkat o bokach " << a << ", " << b << ", " << c << std::endl;
    return;
}

double Triangle::area()const{
    double s = (a + b + c ) / 2;
    double area = sqrt( s * (s-a) * (s-b) * (s-c) );
    return area;
}

void Triangle::shift(double x, double y){
    std::cout << "Przesuwam Trojkat o (" << x << ", " << y << ")" << std::endl;
    return;
}