#pragma once
#include <iostream>

// Umozliwia transformacje obiektow tej klasy
class Transformable {
public:
    virtual ~Transformable(){};
    virtual void shift(double x, double y) = 0; // Przesun poziomo o x, pionowo o y. metoda abstrakcyjna do przeladowania w klasach pochodnych
    
};