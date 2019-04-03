#pragma once
#include <iostream>

class Shape {
    public:
        Shape() = default;
        virtual ~Shape(){};
        virtual void draw()const{}; // Draw the shape to standard output
        virtual void scale(double factor){}; // Scale the shape accordingly
};

namespace Colors {
    std::string RED = "red";
    std::string BLUE = "blue";
    std::string GREEN = "green";
}