#pragma once
#include<iostream>
#include "Drawable.h"
#include "Transformable.h"

class Shape : public Drawable, public Transformable {
    public:
        virtual ~Shape(){};
        virtual double area()const = 0; // Oblicz i zwroc pole powierzchni
};