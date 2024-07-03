#include "Wybor.h"
#include "funkcje.h"

using namespace std;

/*
* Uwaga: Zadania kod rozwiazania zaania umieszczać pomiędzy #ifdef a #endif. 
*/

#ifdef Kol_1


int main()
{
	float rozmiar1 = 10;
	float rozmiar2 = 15;
	float rozmiar3 = 20;
	Struktura tablica1 = alokacja(rozmiar1);
	Struktura tablica2 = alokacja(rozmiar2);
	Struktura tablica3 = alokacja(rozmiar3);

	zapisDoPliku(tablica1);
	Struktura odczytana1 = odczytZPliku(tablica1);
	zapisDoPliku(tablica3);
	Struktura odczytana2 = odczytZPliku(tablica2);
	
	/*for (int i = 0; i < rozmiar1; i++) {
		cout << odczytana1.tab[i] << "\t";
	}*/

	bool identyczne = true;

	if (tablica1.tab != odczytana1.tab && tablica3.tab != odczytana2.tab) {
		identyczne = false;
	}
	if (identyczne) {
		cout << "Tablice sa identyczne!\n";
	}
	else {
		cout << "Tablice NIE sa identyczne\n";
	}

	dealokacja(tablica1);
	dealokacja(tablica2);
	dealokacja(tablica3);
	dealokacja(odczytana1);
	dealokacja(odczytana2);

}

#endif
