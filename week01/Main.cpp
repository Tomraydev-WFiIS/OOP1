/*
 Celem zadania jest napisanie kilku klas związanych relacja
 dziedziczenia.  Klasy te opisuja elementarne operacje matematyczne. 
 Kazde działanie ma polimorficzne metody i konieczna infrastrukture.
 Ponadto pojawia się przeciążony operator >>= do wypisania działania.

 Pliku Main.cpp nie modyfikujemy.

 Program prosze kompilowac przynajmniej z flaga -Wall.
 Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
 obiektowe i plik wykonywalny. 
 */

#include <iostream>
#include "Division.h"
#include "Exponentiation.h"
#include "SumOfElements.h"

int main() {
  Division divide(4,2);
  Exponentiation pow(5, 0.5);
  const int n = 4;
  double numbers[n] = {1,3.2,5,11};
  const SumOfElements suma(numbers, n);

  "***" >>= divide;
  "---" >>= pow;
  "===" >>= suma;

  Operation* d1 = new Division(7,2);
  "---" >>= *d1;
  delete d1;

  Operation* d2 = new SumOfElements(numbers, n);
  "___" >>= *d2;
  delete d2;
  
  std::cout << "=====================================" << std::endl;
    
  const Operation* all[] = {&divide, &pow, &suma}; 
  for ( unsigned idx = 0; idx < sizeof(all)/sizeof(Operation*); ++idx ) {
    const Operation* d = all[idx];
    d->print(); 
    std::cout << " = " << d->eval() << std::endl;
  }  
}
/* wynik

*** 4 / 2 ***
--- 5 ^ 0.5 ---
=== 1 + 3.2 + 5 + 11 ===
--- 7 / 2 ---
___ 1 + 3.2 + 5 + 11 ___
=====================================
4 / 2 = 2
5 ^ 0.5 = 2.23607
1 + 3.2 + 5 + 11 = 20.2

 */
