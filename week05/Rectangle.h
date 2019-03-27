#pragma once
#include <iostream>
#include "Drawable.h"
#include "Transformable.h"
#include "Shape.h"

// Zawiera dlugosci bokow: a, b
class Rectangle : public Shape {
public:
    Rectangle(double aa, double bb): a(aa), b(bb){};
    void draw()const;
    double area()const;
    void shift(double x, double y);
private:
    double a;
    double b;
};

void Rectangle::draw()const{
    std::cout << "Rysuje Prostokat o bokach " << a << ", " << b  << std::endl;
    return;
}

double Rectangle::area()const{
    double area = a*b;
    return area;
}

void Rectangle::shift(double x, double y){
    std::cout << "Przesuwam Prostokat o (" << x << ", " << y << ")" << std::endl;
    return;
}
