#pragma once
#include <iostream>

// Umozliwia rysowanie obiektow tej klasy
class Drawable {
public:
    virtual ~Drawable(){};
    virtual void draw()const= 0; // Narysuj obiekt, metoda abstrakcyjna do przeladowania w klasach pochodnych
};