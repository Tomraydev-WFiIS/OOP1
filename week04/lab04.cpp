/*
 Celem zadania jest przećwiczenie mechanizmu dziedziczenia. 
 W tym celu stworzymy hierarchię klas reprezentujących elementy 
 strony internetowej (czysty tekst, nagłówek, paragraf, blok).
 blok może zawierać inne elementy.

 Proszę napisać klasy o odpowiedniej hierarchii oraz funkcje
 niezbędne do działania programu.

 W klasie Block można wykorzystać std::vector (jeśli ktoś zna).
 Ewentualnie trywialną tablicę o wystarczająco dużym rozmiarze.

 Przydatna może być konkatenacja string-a z int-em, np. w c++11:
			text2 = text1 + std::to_string(num);
 gdzie text2 i text1 są typu std::string, a num jest typu int.

 Pliku Main.cpp nie modyfikujemy.

 Program proszę kompilowac przynajmniej z flaga -Wall.
 Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
 obiektowe i plik wykonywalny. 
 */

#include <iostream>
#include "Block.h"
#include "Paragraph.h"
#include "Header.h"
#include "PlainText.h"

int main() {

	const Element *pt = new PlainText("Tekst bez tag-ów");
	std::cout << *pt << std::endl;
	Element *header = new Header("Podtytul",2);
	std::cout << *header << std::endl << std::endl;
	
	Block *block1 = new Block;
	block1->add(header);
	block1->add(pt);
	block1->add( new Paragraph("Tekst w paragrafie") );
	std::cout << *block1 << std::endl << std::endl;
	
	Block *block2 = new Block;
	block2->add(new Header("Tytul",4));
	block2->add(new PlainText("Kolejny tekst bez tag-ów"));
	block2->add( block1 );
	std::cout << *block2 << std::endl << std::endl;

	delete block2; // pozostałe obiekty usuwa Block
	
}

/* wynik

Tekst bez tag-ów
<h2>Podtytul</h2>

<div>
<h2>Podtytul</h2>
Tekst bez tag-ów
<p>Tekst w paragrafie</p>
</div>

<div>
<h4>Tytul</h4>
Kolejny tekst bez tag-ów
<div>
<h2>Podtytul</h2>
Tekst bez tag-ów
<p>Tekst w paragrafie</p>
</div>
</div>

 */
