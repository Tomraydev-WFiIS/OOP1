/*
 Celem zadania jest napisanie kilku klas związanych relacją
 dziedziczenia. Klasy te opisuja funcje matematyczne i pochodną.
 Należy znaleźć hierarchię, którą są połączone.
 Wyliczanie wartości w punkcie x jest zgodne z zapisem coś(x).

 Różniczkowanie wykonujemy numerycznie: 

	df/dx ----> ( f(x+dx)-f(x-dx) )/(2 dx)

 gdzie dx jest bardzo małym krokiem)
 
 Pliku Main.cpp nie modyfikujemy (nie dotyczy to ewentualnie 
 części dodatkowej).

 Program proszę kompilowac przynajmniej z flaga -Wall.
 Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
 obiektowe i plik wykonywalny. 
 */

#include <iostream>
#include <cmath>
#include "Quadratic.h"
#include "Sin.h"
#include "Derivative.h"

int main() {
  Sin sinus(4.); // sin(4*x)
  Function *quadratic_fun = new Quadratic( 4, 6, 2); // 4*x*x + 6*x + 2
  
  std::cout << "sin: " << sinus(0.5) << std::endl;
  std::cout << "quadratic: " << (*quadratic_fun)(1.5) << std::endl;
  
  std::cout << "==== Derivatives ====" << std::endl;
    
  Derivative *differentiate_1 = new Derivative( quadratic_fun ); // pierwsza pochodna fcji kwadratowej
  Derivative differentiate_2( differentiate_1 ); // druga pochodna fcji kwadratowej
  Derivative differentiate_sin( new Sin(2) ); // pierwsza pochodna sinusa ...

  differentiate_1->set_dx(0.01);
  differentiate_2.set_dx(0.1);
  differentiate_sin.set_dx(0.01);
  
  // wyliczamy pochodne w punkcje x 
  std::cout << "2nd order: " << differentiate_2( M_PI/2 ) << std::endl;
  std::cout << "2nd order: " << differentiate_2( 1000. ) << std::endl;
  std::cout << "1st order sin: " << differentiate_sin( M_PI/2 ) << std::endl;

  std::cout << "==== Assignment ====" << std::endl;

  differentiate_2 = differentiate_sin = differentiate_sin;

  std::cout << "2nd order: " << differentiate_2( M_PI/2 ) << std::endl;
  std::cout << "1st order sin: " << differentiate_sin( M_PI/2 ) << std::endl;
  
}

/* wynik

sin: 0.909297
quadratic: 20
==== Derivatives ====
2nd order: 8
2nd order: 8
1st order sin: -1.99987
==== Assignment ====
2nd order: -1.99987
1st order sin: -1.99987


 */
