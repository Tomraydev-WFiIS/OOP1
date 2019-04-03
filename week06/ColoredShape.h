#pragma once
#include <iostream>
#include "Shape.h"

class ColoredShape {
protected:
    Shape* s; // Geometric shape
    std::string fillColor;
    std::string borderColor;
    bool isBorder = false; // border flag
public:
    virtual ~ColoredShape();
    void draw()const;
    virtual void setColor(std::string c){};

    Shape* getShape();
    std::string getFillColor();
    std::string getBorderColor();
};

void ColoredShape::draw()const{
    s->draw();
    std::cout << " -- with "<< fillColor << " filling" << std::endl;
    if(isBorder){
        std::cout << " -- with "<< borderColor << " border" << std::endl;
    }
    return;
}

ColoredShape::~ColoredShape() {
    delete s;
}

Shape* ColoredShape::getShape(){
    return s;
}

std::string ColoredShape::getFillColor(){
    return fillColor;
}
std::string ColoredShape::getBorderColor(){
    return borderColor;
}