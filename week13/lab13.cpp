/* Opis zadania:
 * Proszę napisać kontener będący opakowaniem na tablicę dynamiczną. 
 * Dla uproszczenia, rozmiar kontenera jest stały w trakcie działania programu, 
 * proszę pamiętać o zarządzaniu pamięcią.
 * 
 * Jako uzupełnienie kontenera, należy napisać podklasę Iterator, który
 * będzie pomocny przy operacjach na kolejnych elementach tej tablicy.
 * 
 * Zakomentowana linijka - po odkomentowaniu ma powodować błąd kompilacji
 * (w przeciwnym razie -4pkt).
 * 
 * Dla ułatwienia nie wymagane definicje metod poza ciałem klasy (ale 
 * uwaga, dla klasy wewnętrznej wymagałyby czegoś więcej)
 * 
 *
 * Proszę nie modyfikować pliku lab13.cpp.
 * Przy wykonaniu zadania nie wolno korzystać z internetu, notatek ani żadnych 
 * innych materiałów (w tym własnych wcześniej przygotowanych plików oprocz makefile)
 * 
 */
 
#include "DynArray.h"
#include "DynArray.h"

#include <iostream>
#include <string>

int main(){
    // array indexing
    DynArray<int> arr(5);   
    for(int i = 0; i < arr.size(); ++i){
        arr[i] = i*i;
    }
    std::cout << "DynArray<int> = " << arr << std::endl;
    
    arr[0] = 10.5;   
    std::cout << "DynArray<int>[0] = " << arr[0] << std::endl;
    
    // array iterators
    const std::string staticArray[4] = {"Anna", "Elsa", "Olaf", "Zen"};
    DynArray<std::string> strArr(4, staticArray);
    
    std::cout << "DynArray<std::string> = "<< strArr << std::endl;            
    for(DynArray<std::string>::Iterator it = strArr.begin(); it != strArr.end(); ++it){ 
        std::cout << "\tBefore: " << *it << std::endl;
        it->append(" Ice");										// do kogo nalezy funkcja append?
        std::cout << "\tAfter : " << *it << std::endl;
    }
    std::cout << "DynArray<std::string> = "<< strArr << std::endl;
    
    const DynArray<int> arr2 = arr;
    std::cout << "DynArray<int> = " << arr2 << std::endl;
    // arr2[1] = 1; 											// program ma się nie kompilować po odkomentowaniu

    return 0;
}

/* Wynik działania programu
DynArray<int> = {"0","1","4","9","16"}
DynArray<int>[0] = 10
DynArray<std::string> = {"Anna","Elsa","Olaf","Zen"}
	Before: Anna
	After : Anna Ice
	Before: Elsa
	After : Elsa Ice
	Before: Olaf
	After : Olaf Ice
	Before: Zen
	After : Zen Ice
DynArray<std::string> = {"Anna Ice","Elsa Ice","Olaf Ice","Zen Ice"}
*/
