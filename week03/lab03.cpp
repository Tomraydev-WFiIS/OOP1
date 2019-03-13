/*
 Celem zadania jest napisanie kilku klas związanych relacją
 dziedziczenia. Klasy reprezentują publikacje, takie jak
 magazyn (czasopismo) i książka. 

 Istnieje także klasa Order, która pozwala na sumowanie 
 cen publikacji i zlicza, ile publikacji w sumie zamówiono.

 Proszę napisać klasy o odpowiedniej hierarchii oraz funkcje
 niezbędne do działania programu. Proszę starać się nie 
 powielać tego samego kodu.

 Uwaga, klasa Book zawiera tablicę rozdziałów (ich liczba jest 
 podana przy deklaracji). 
 Do przechowywania tytułów publikacji i tytułów rozdziałów 
 można wykorzystać std::string (plik nagłówkowy <string> ). 


 Pliku Main.cpp proszę nie modyfikować.

 Program proszę kompilowac przynajmniej z flaga -Wall.
 Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
 obiektowe i plik wykonywalny. 
 */

#include <iostream>
#include "Book.h"
#include "Magazine.h"
#include "Order.h"

int main() {

	Magazine magazine("Focus");
	magazine.set_price(9.99);
	magazine.set_month(3); // numer miesiaca

	Book *book = new Book("Ostatnie zyczenie", 3);
	book->set_price(27.99);
	book->add_chapter("Glos rozsadku");
	book->add_chapter("Mniejsze zlo");
	book->add_chapter("Kwestia ceny");

	unsigned num_of_publications = 2;
	Publication *p[] = { &magazine, book };
	for (unsigned i = 0; i < num_of_publications; ++i)
	{
		p[i]->print();
	}

	Order cart1;
	for (unsigned i = 0; i < num_of_publications; ++i)
	{
		cart1.add_to_cart( *p[i] );
	}

	Order cart2;
	cart2.add_to_cart(magazine);
	
	std::cout << "total price cart1: " << cart1.total_price() << std::endl;
	std::cout << "total price cart2: " << cart2.total_price() << std::endl;
	std::cout << "total number of ordered items: " << Order::number_of_orders() << std::endl;

	Publication *book_ptr = book; 
	delete book_ptr;
}

/* wynik

title: Focus
price: 9.99
month: 3

title: Ostatnie zyczenie
price: 27.99
Glos rozsadku
Mniejsze zlo
Kwestia ceny

total price cart1: 37.98
total price cart2: 9.99
total number of ordered items: 3


 */
