#pragma once
#include <iostream>
#include "ColoredShape.h"

class ColorBorderShape : public ColoredShape {
public:
    ColorBorderShape(ColoredShape* shape); // Assign a colored shape
    void setColor(std::string c); // set the fill color
};

ColorBorderShape::ColorBorderShape(ColoredShape* cShape){
    s = cShape->getShape();
    fillColor = cShape->getFillColor();
    borderColor = cShape->getBorderColor();
}

void ColorBorderShape::setColor(std::string c){
    isBorder = true;
    borderColor = c;
}