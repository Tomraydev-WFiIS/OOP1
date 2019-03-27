#pragma once
#include<iostream>
#include "Drawable.h"
#include "Transformable.h"
#include "Shape.h"

// Tablica punktow (tak naprawde tylko liczba punktow)
class PointArray : public Drawable, public Transformable {
public:
    PointArray(int num): num_of_points(num){};
    void draw()const;
    void shift(double x, double y);
private:
    int num_of_points;
};

void PointArray::draw()const{
    std::cout << "Rysuje " << num_of_points << " Punkty" << std::endl;
    return;
}

void PointArray::shift(double x, double y){
    return;
}
