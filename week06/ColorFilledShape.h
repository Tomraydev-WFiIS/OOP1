#pragma once
#include <iostream>
#include "ColoredShape.h"

class ColorFilledShape : public ColoredShape {
public:
    ColorFilledShape(Shape* shape); // Assign a geometric shape
    void setColor(std::string c); // set the fill color
};

ColorFilledShape::ColorFilledShape(Shape* shape){
    s = shape;
    fillColor = "white";
    borderColor = "white";
}

void ColorFilledShape::setColor(std::string c){
    fillColor = c;
}